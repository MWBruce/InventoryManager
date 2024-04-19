#include "../../includes/commands/get_product_description_command.h"
#include <iostream>

GetProductDescriptionCommand::GetProductDescriptionCommand(Catalog* catalog, int productId)
    : catalog(catalog), productId(productId) {}

void GetProductDescriptionCommand::execute() {
    std::cout << "Product Description: " << catalog->getProductDescription(productId) << std::endl;
}
