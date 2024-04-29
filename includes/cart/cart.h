#ifndef CART_H
#define CART_H

#include <vector>
#include <tuple>
#include "payment/payment_strategy/payment_strategy.h"
#include "transaction.h"

class Cart {
public:
    Cart();
    ~Cart();

    void addItem(int productId, int quantity, double price);
    void removeItem(int productId, int quantity);
    void emptyCart();
    bool makePayment(PaymentStrategy* payment_method, float amount);
    Transaction confirmTransaction();

private:
    std::vector<std::tuple<int, int, double>> items;
    float totalCost() const;
    float balance;
};

#endif
