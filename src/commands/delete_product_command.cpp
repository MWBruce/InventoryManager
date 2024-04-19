#include "../../includes/commands/delete_product_command.h"
#include "../../includes/commands/command_response.h"

CommandResponse DeleteProductCommand::execute() {
    bool success = inventory->removeProduct(productId,inventory->getProductQuantity(productId));
    return success ? CommandResponse(true, "Product deleted") : CommandResponse(false, "Failed to delete product (didn't exist)");
}

DeleteProductCommand::DeleteProductCommand(Inventory* inventory, int productId)
    : inventory(inventory), productId(productId) {}

