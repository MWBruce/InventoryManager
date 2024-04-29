#ifndef PAYMENT_STRATEGY_FACTORY_H
#define PAYMENT_STRATEGY_FACTORY_H

#include "payment_method.h"
#include "payment_strategy/cash_payment.h"
#include "payment_strategy/card_payment.h"
#include <memory>

class PaymentStrategyFactory {
public:
    static std::unique_ptr<PaymentStrategy> createPaymentStrategy(PaymentMethod method);
};

#endif
