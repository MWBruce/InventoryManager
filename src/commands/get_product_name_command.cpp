#include "../../includes/commands/get_product_name_command.h"
#include <iostream>

GetProductNameCommand::GetProductNameCommand(Catalog* catalog, int productId)
    : catalog(catalog), productId(productId) {}

void GetProductNameCommand::execute() {
    std::cout << "Product Name: " << catalog->getProductName(productId) << std::endl;
}
