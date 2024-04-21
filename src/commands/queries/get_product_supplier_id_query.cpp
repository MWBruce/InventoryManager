#include "../../includes/commands/queries/get_product_supplier_id_query.h"

GetProductSupplierIdQuery::GetProductSupplierIdQuery(int productId) : productId(productId) {}

CommandType GetProductSupplierIdQuery::getCommandType() const {
    return GetProductSupplierId;
}

int GetProductSupplierIdQuery::getProductId() const { return productId; }