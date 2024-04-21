#include "../../includes/commands/queries/get_product_price_query.h"

GetProductPriceQuery::GetProductPriceQuery(int productId) : productId(productId) {}

CommandType GetProductPriceQuery::getCommandType() const {
    return GetProductPrice;
}

int GetProductPriceQuery::getProductId() const { return productId; }