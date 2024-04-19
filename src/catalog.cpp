#include "../includes/catalog.h"

Catalog::~Catalog() {
    for (auto& product : products) {
        delete product.second;
    }
}

void Catalog::createProduct(const std::string& name, double price, const std::string& description, int supplierId) {
    Product* newProduct = new Product(name, price, description, supplierId);
    products[newProduct->id] = newProduct;
    totalStock[newProduct->id] = 0; 
}

void Catalog::registerInventory(Inventory* inventory) {
    inventories.push_back(inventory);
}

int Catalog::getTotalStock(int productId) const {
    auto it = totalStock.find(productId);
    if (it != totalStock.end()) {
        return it->second;
    }
    return 0;
}

bool Catalog::productExists(int productId) const {
    return products.find(productId) != products.end();
}

void Catalog::updateStock(int productId, int amount) {
    if (productExists(productId)) {
        totalStock[productId] += amount;
    }
}

void Catalog::displayProducts() const {
    std::cout << "Displaying products...\n";
    for (const auto& pair : products) {
        if (pair.second == nullptr) {
            std::cout << "Warning: Null pointer detected for product ID " << pair.first << std::endl;
            continue;
        }
        const Product* p = pair.second;
        std::cout << "Product ID: " << p->id << " - Name: " << p->getName() << std::endl;
    }
}

void Catalog::updateProductName(int productId, const std::string& newName) {
    auto it = products.find(productId);
    if (it != products.end() && it->second != nullptr) {
        it->second->setName(newName);
    }
}

