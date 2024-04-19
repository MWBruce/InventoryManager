#ifndef CATALOG_H
#define CATALOG_H

#include "product.h"
#include <unordered_map>
#include <vector>
#include <iostream> ////// for display products, should be removed

class Catalog {
private:
    std::unordered_map<int, Product*> products;
    std::unordered_map<int, int> totalStock; 
    std::vector<class Inventory*> inventories; 

public:
    ~Catalog();
    void createProduct(const std::string& name, double price, const std::string& description, int supplierId);
    void registerInventory(Inventory* inventory);
    int getTotalStock(int productId) const;
    void updateStock(int productId, int amount);
    bool productExists(int productId) const;
    void displayProducts() const;
    void updateProductName(int productId, const std::string& newName);
};

#endif 
