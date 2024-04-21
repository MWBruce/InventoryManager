#include "../../includes/commands/queries/check_store_product_quantity_query.h"


CheckStoreProductQuantityQuery::CheckStoreProductQuantityQuery(int productId) : productId(productId) {}

int CheckStoreProductQuantityQuery::getProductId() const {
    return productId;
}

CommandType CheckStoreProductQuantityQuery::getCommandType() const {
    return CheckStoreProductQuantity;
}