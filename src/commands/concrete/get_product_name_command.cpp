#include "../../includes/commands/concrete/get_product_name_command.h"
#include "../../includes/commands/command_response.h"

GetProductNameCommand::GetProductNameCommand(Catalog* catalog, const GetProductNameQuery& query)
    : catalog(catalog), productId(query.getProductId()) {}

CommandResponse GetProductNameCommand::execute() {
    std::string name = catalog->getProductName(productId);
    return CommandResponse(true, "Product name retrieved", name);
}
