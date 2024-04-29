#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <vector>
#include <tuple>
#include "transaction_type.h" 

struct Transaction {
    std::vector<std::tuple<int, int, double>> items; 
    TransactionType type; 
};

#endif
