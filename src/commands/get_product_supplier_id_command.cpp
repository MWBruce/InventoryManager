#include "../../includes/commands/get_product_supplier_id_command.h"
#include <iostream>

GetProductSupplierIdCommand::GetProductSupplierIdCommand(Catalog* catalog, int productId)
    : catalog(catalog), productId(productId) {}

void GetProductSupplierIdCommand::execute() {
    std::cout << "Product Supplier ID: " << catalog->getProductSupplierId(productId) << std::endl;
}
