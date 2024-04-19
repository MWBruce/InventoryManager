#include "../includes/product.h"

int Product::currentId = 0;

Product::Product(const std::string& name, double price, const std::string& description, int supplierId)
    : id(++currentId), name(name), price(price), description(description), supplierId(supplierId) {}

std::string Product::getName() const {
    return name;
}

void Product::setName(const std::string& newName) {
    name = newName;
}

double Product::getPrice() const {
    return price;
}

void Product::setPrice(double newPrice) {
    price = newPrice;
}

std::string Product::getDescription() const {
    return description;
}

void Product::setDescription(const std::string& newDescription) {
    description = newDescription;
}

int Product::getSupplierId() const {
    return supplierId;
}

void Product::setSupplierId(int newSupplierId) {
    supplierId = newSupplierId;
}

