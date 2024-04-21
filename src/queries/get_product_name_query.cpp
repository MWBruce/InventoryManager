#include "../../includes/queries/get_product_name_query.h"

GetProductNameQuery::GetProductNameQuery(int productId) : productId(productId) {}

CommandType GetProductNameQuery::getCommandType() const {
    return GetProductName;
}

int GetProductNameQuery::getProductId() const { 
    return productId; 
}