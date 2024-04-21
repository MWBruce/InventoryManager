#include "../../includes/queries/update_product_price_query.h"

UpdateProductPriceQuery::UpdateProductPriceQuery(int productId, double newPrice)
    : productId(productId), newPrice(newPrice) {}

CommandType UpdateProductPriceQuery::getCommandType() const {
    return UpdateProductPrice;
}

int UpdateProductPriceQuery::getProductId() const { 
    return productId; 
}

double UpdateProductPriceQuery::getNewPrice() const { 
    return newPrice; 
}