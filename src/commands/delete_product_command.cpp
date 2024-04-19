#include "../../includes/commands/delete_product_command.h"

DeleteProductCommand::DeleteProductCommand(Inventory* inventory, int productId)
    : inventory(inventory), productId(productId) {}

void DeleteProductCommand::execute() {
    inventory->removeProduct(productId, inventory->getProductQuantity(productId));
}