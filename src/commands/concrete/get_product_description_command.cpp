#include "../../includes/commands/concrete/get_product_description_command.h"
#include "../../includes/commands/command_response.h"

CommandResponse GetProductDescriptionCommand::execute() {
    std::string description = catalog->getProductDescription(productId);
    return CommandResponse(true, "Product description retrieved", description);
}

GetProductDescriptionCommand::GetProductDescriptionCommand(Catalog* catalog, int productId)
    : catalog(catalog), productId(productId) {}
