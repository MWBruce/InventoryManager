#ifndef CASH_PAYMENT_STRATEGY_H
#define CASH_PAYMENT_STRATEGY_H

#include "payment_strategy.h"
#include <iostream>

class CashPaymentStrategy : public PaymentStrategy {
public:
    bool pay(float amount) override;
};

#endif 