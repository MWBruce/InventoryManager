#include "../../includes/commands/get_product_name_command.h"
#include "../../includes/commands/command_response.h"

CommandResponse GetProductNameCommand::execute() {
    std::string name = catalog->getProductName(productId);
    return CommandResponse(true, "Product name retrieved", name);
}

GetProductNameCommand::GetProductNameCommand(Catalog* catalog, int productId)
    : catalog(catalog), productId(productId) {}
