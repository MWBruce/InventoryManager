#include "../../includes/commands/concrete/get_product_price_command.h"
#include "../../includes/commands/command_response.h"

CommandResponse GetProductPriceCommand::execute() {
    double price = catalog->getProductPrice(productId);
    return CommandResponse(true, "Product price retrieved", price);
}

GetProductPriceCommand::GetProductPriceCommand(Catalog* catalog, int productId)
    : catalog(catalog), productId(productId) {}
