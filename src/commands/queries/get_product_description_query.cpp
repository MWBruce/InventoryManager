#include "../../includes/commands/queries/get_product_description_query.h"


GetProductDescriptionQuery::GetProductDescriptionQuery(int productId) : productId(productId) {}

CommandType GetProductDescriptionQuery::getCommandType() const {
    return GetProductDescription;
}

int GetProductDescriptionQuery::getProductId() const {
    return productId;
}
