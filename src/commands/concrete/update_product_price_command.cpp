#include "../../includes/commands/concrete/update_product_price_command.h"
#include "../../includes/commands/command_response.h"

UpdateProductPriceCommand::UpdateProductPriceCommand(Catalog* catalog, const UpdateProductPriceQuery& query)
    : catalog(catalog), productId(query.getProductId()), newPrice(query.getNewPrice()) {}


CommandResponse UpdateProductPriceCommand::execute() {
    catalog->updateProductPrice(productId, newPrice);
    return CommandResponse(true, "Product price updated successfully.");
}
