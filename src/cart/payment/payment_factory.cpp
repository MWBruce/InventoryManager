#include "../includes/cart/payment/payment_factory.h"

std::unique_ptr<PaymentStrategy> PaymentStrategyFactory::createPaymentStrategy(PaymentMethod method) {
    switch (method) {
        case PaymentMethod::Cash:
            return std::make_unique<CashPaymentStrategy>();
        case PaymentMethod::Card:
            return std::make_unique<CardPaymentStrategy>();
        default:
            throw std::invalid_argument("Unknown payment method");
    }
}
