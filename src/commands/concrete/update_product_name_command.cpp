#include "../../includes/commands/concrete/update_product_name_command.h"
#include "../../includes/commands/command_response.h"

UpdateProductNameCommand::UpdateProductNameCommand(Catalog* catalog, const UpdateProductNameQuery& query)
    : catalog(catalog), productId(query.getProductId()), newName(query.getNewName()) {}


CommandResponse UpdateProductNameCommand::execute() {
    catalog->updateProductName(productId, newName);
    return CommandResponse(true, "Product name updated successfully.");
}
