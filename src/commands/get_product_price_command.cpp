#include "../../includes/commands/get_product_price_command.h"
#include <iostream>

GetProductPriceCommand::GetProductPriceCommand(Catalog* catalog, int productId)
    : catalog(catalog), productId(productId) {}

void GetProductPriceCommand::execute() {
    std::cout << "Product Price: $" << catalog->getProductPrice(productId) << std::endl;
}
