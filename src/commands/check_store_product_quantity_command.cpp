#include "../../includes/commands/check_store_product_quantity_command.h"

CheckStoreProductQuantityCommand::CheckStoreProductQuantityCommand(Inventory* inventory, int productId) 
    : inventory(inventory), productId(productId) {}

void CheckStoreProductQuantityCommand::execute() {
    std::cout << "Product ID " << productId << " Quantity: " << inventory->getProductQuantity(productId) << std::endl;
}
