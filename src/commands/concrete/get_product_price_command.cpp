#include "../../includes/commands/concrete/get_product_price_command.h"
#include "../../includes/commands/command_response.h"

GetProductPriceCommand::GetProductPriceCommand(Catalog* catalog, const GetProductPriceQuery& query)
    : catalog(catalog), productId(query.getProductId()) {}

CommandResponse GetProductPriceCommand::execute() {
    double price = catalog->getProductPrice(productId);
    return CommandResponse(true, "Product price retrieved", price);
}
