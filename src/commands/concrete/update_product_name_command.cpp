#include "../../includes/commands/concrete/update_product_name_command.h"
#include "../../includes/commands/command_response.h"

CommandResponse UpdateProductNameCommand::execute() {
    catalog->updateProductName(productId, newName);
    return CommandResponse(true, "Product name updated");
}

UpdateProductNameCommand::UpdateProductNameCommand(Catalog* catalog, int productId, const std::string& newName)
    : catalog(catalog), productId(productId), newName(newName) {}
