#ifndef CATALOG_H
#define CATALOG_H

#include "product.h"
#include <unordered_map>
#include <vector>

class Catalog {
private:
    std::unordered_map<int, Product*> products;
    std::unordered_map<int, int> totalStock; 
    std::vector<class Inventory*> inventories; 

public:
    ~Catalog();
    int createProduct(const std::string& name, double price, const std::string& description, int supplierId);
    void registerInventory(Inventory* inventory);
    int getTotalStock(int productId) const;
    void updateStock(int productId, int amount);
    bool productExists(int productId) const;
    void updateProductName(int productId, const std::string& newName);
    void updateProductPrice(int productId, const float price);
    void updateProductDescription(int productId, const std::string& desc);
    void updateSupplierId(int productId, const int newId);
    std::string getProductName(int productId);
    double getProductPrice(int productId);
    std::string getProductDescription(int productId);
    int getProductSupplierId(int productId);

};

#endif 
