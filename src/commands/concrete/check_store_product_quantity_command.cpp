#include "../../includes/commands/concrete/check_store_product_quantity_command.h"
#include "../../includes/commands/command_response.h"

CommandResponse CheckStoreProductQuantityCommand::execute() {
    int quantity = inventory->getProductQuantity(productId);
    return CommandResponse(true, "Quantity retrieved", quantity);
}