#include "../../includes/commands/queries/update_product_supplier_id_query.h"

UpdateProductSupplierIdQuery::UpdateProductSupplierIdQuery(int productId, int newSupplierId)
    : productId(productId), newSupplierId(newSupplierId) {}

CommandType UpdateProductSupplierIdQuery::getCommandType() const {
    return UpdateProductSupplierId;
}

int UpdateProductSupplierIdQuery::getProductId() const { 
    return productId; 
}

int UpdateProductSupplierIdQuery::getNewSupplierId() const { 
    return newSupplierId; 
}