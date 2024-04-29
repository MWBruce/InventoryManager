#include "../includes/cart/payment/payment_strategy/card_payment.h"

bool CardPaymentStrategy::pay(float amount) {
    std::cout << "Processing card payment of $" << amount << std::endl;
    return true; 
}