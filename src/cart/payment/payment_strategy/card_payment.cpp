#include "../includes/cart/payment/payment_strategy/cash_payment.h"

bool CashPaymentStrategy::pay(float amount) {
    std::cout << "Processing cash payment of $" << amount << std::endl;
    return true; 
}