#ifndef PAYMENT_STRATEGIES_H
#define PAYMENT_STRATEGIES_H

class PaymentStrategy {
public:
    virtual ~PaymentStrategy() {}
    virtual bool pay(float amount) = 0;
};

#endif 
