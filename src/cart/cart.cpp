#include "../includes/cart/cart.h"
#include <algorithm>

Cart::Cart() : balance(0) {}

Cart::~Cart() {}

void Cart::addItem(int productId, int quantity, double price) {
    auto it = std::find_if(items.begin(), items.end(), [&](const auto& item) {
        return std::get<0>(item) == productId;
    });

    if (it != items.end()) {
        std::get<1>(*it) += quantity; 
        balance += quantity * price;
    } else {
        items.emplace_back(productId, quantity, price);
        balance += quantity * price;
    }
}

void Cart::removeItem(int productId, int quantity) {
    auto it = std::find_if(items.begin(), items.end(), [&](const auto& item) {
        return std::get<0>(item) == productId;
    });

    if (it != items.end() && std::get<1>(*it) >= quantity) {
        std::get<1>(*it) -= quantity;
        balance -= quantity * std::get<2>(*it);
        if (std::get<1>(*it) == 0) {
            items.erase(it);
        }
    }
}

void Cart::emptyCart() {
    items.clear();
    balance = 0;
}

bool Cart::makePayment(PaymentStrategy* payment_method, float amount) {
    if (payment_method->pay(amount)) {
        balance -= amount;
        return true;
    }
    return false;
}

Transaction Cart::confirmTransaction() {
    if(balance == 0) {
        Transaction transaction{items, TransactionType::Sale};
        emptyCart();
        return transaction;  
    }
    Transaction transaction{items, TransactionType::Other};
    emptyCart();
    return transaction;  
}

float Cart::totalCost() const {
    float total = 0;
    for (const auto& item : items) {
        total += std::get<1>(item) * std::get<2>(item);
    }
    return total;
}
