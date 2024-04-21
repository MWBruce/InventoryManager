#include "../../includes/commands/concrete/update_product_description_command.h"
#include "../../includes/commands/command_response.h"

CommandResponse UpdateProductDescriptionCommand::execute() {
    catalog->updateProductDescription(productId, newDescription);
    return CommandResponse(true, "Product description updated");
}


UpdateProductDescriptionCommand::UpdateProductDescriptionCommand(Catalog* catalog, int productId, const std::string& newDescription)
    : catalog(catalog), productId(productId), newDescription(newDescription) {}

