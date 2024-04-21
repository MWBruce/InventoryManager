#include "../../includes/queries/update_product_name_query.h"

UpdateProductNameQuery::UpdateProductNameQuery(int productId, const std::string& newName)
    : productId(productId), newName(newName) {}

CommandType UpdateProductNameQuery::getCommandType() const {
    return UpdateProductName;
}

int UpdateProductNameQuery::getProductId() const { 
    return productId; 
}

std::string UpdateProductNameQuery::getNewName() const { 
    return newName; 
}