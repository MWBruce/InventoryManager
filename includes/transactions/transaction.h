#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <unordered_map>

class Transaction {
protected:
    static int currentId;
    int id;
    double amount; 
    std::unordered_map<int, int> affectedItems; 

public:
    Transaction(double amount) : id(++currentId), amount(amount) {}
    ~Transaction() = default;

    void execute();
    void recordItem(int itemId, int count);
    int getId() const { return id; }
};

#endif 
