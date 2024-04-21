#include "../../includes/commands/concrete/get_product_description_command.h"
#include "../../includes/commands/command_response.h"

GetProductDescriptionCommand::GetProductDescriptionCommand(Catalog* catalog, const GetProductDescriptionQuery& query)
    : catalog(catalog), productId(query.getProductId()) {}

CommandResponse GetProductDescriptionCommand::execute() {
    std::string description = catalog->getProductDescription(productId);
    if (!description.empty()) {
        return CommandResponse(true, "Product description retrieved successfully", description);
    } else {
        return CommandResponse(false, "No description found for the specified product");
    }
}
