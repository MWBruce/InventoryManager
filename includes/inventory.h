#ifndef INVENTORY_H
#define INVENTORY_H

#include <unordered_map>
#include "catalog.h"

class Inventory {
private:
    static int currentId; 
    int id; 
    std::unordered_map<int, int> stock; 
    Catalog* catalog;

public:
    Inventory(Catalog* cat);
    void addProduct(int productId, int quantity);
    void removeProduct(int productId, int quantity);
    int getProductQuantity(int productId) const;
    int getId() const;
    
};

#endif
