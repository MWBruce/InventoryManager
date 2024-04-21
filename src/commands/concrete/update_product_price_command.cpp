#include "../../includes/commands/concrete/update_product_price_command.h"
#include "../../includes/commands/command_response.h"

CommandResponse UpdateProductPriceCommand::execute() {
    catalog->updateProductPrice(productId, newPrice);
    return CommandResponse(true, "Product price updated");
}

UpdateProductPriceCommand::UpdateProductPriceCommand(Catalog* catalog, int productId, double newPrice)
    : catalog(catalog), productId(productId), newPrice(newPrice) {}
