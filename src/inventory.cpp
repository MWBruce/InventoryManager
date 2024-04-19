#include "../includes/inventory.h"

int Inventory::currentId = 0;

Inventory::Inventory(Catalog* cat) : catalog(cat), id(++currentId) {
    catalog->registerInventory(this);
}

void Inventory::addProduct(int productId, int quantity) {
    if (catalog->productExists(productId)) {
        stock[productId] += quantity;
        catalog->updateStock(productId, quantity);
    }
}

bool Inventory::removeProduct(int productId, int quantity) {
    auto it = stock.find(productId);
    if (it != stock.end()) {
        it->second -= quantity;
        catalog->updateStock(productId, -quantity);
        return true;
    }
    return false;
}

int Inventory::getProductQuantity(int productId) const {
    auto it = stock.find(productId);
    if (it != stock.end()) {
        return it->second;
    }
    return 0;
}