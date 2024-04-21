#include "../../includes/queries/update_product_description_query.h"

UpdateProductDescriptionQuery::UpdateProductDescriptionQuery(int productId, const std::string& newDescription)
    : productId(productId), newDescription(newDescription) {}

CommandType UpdateProductDescriptionQuery::getCommandType() const{
    return UpdateProductDescription;
}

int UpdateProductDescriptionQuery::getProductId() const { 
    return productId; 
}

std::string UpdateProductDescriptionQuery::getNewDescription() const { 
    return newDescription; 
}