#ifndef CARD_PAYMENT_STRATEGY_H
#define CARD_PAYMENT_STRATEGY_H

#include "payment_strategy.h"
#include <iostream>

class CardPaymentStrategy : public PaymentStrategy {
public:
    bool pay(float amount) override;
};

#endif 
