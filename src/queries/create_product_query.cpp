#include "../../includes/queries/create_product_query.h"

CreateProductQuery::CreateProductQuery(const std::string& name, double price, const std::string& description, int supplierId)
    : name(name), price(price), description(description), supplierId(supplierId) {}


CommandType CreateProductQuery::getCommandType() const {
    return CreateProduct;
}

std::string CreateProductQuery::getName() const {
    return name;
}

double CreateProductQuery::getPrice() const {
    return price;
}

std::string CreateProductQuery::getDescription() const {
    return description;
}

int CreateProductQuery::getSupplierId() const {
    return supplierId;
}
