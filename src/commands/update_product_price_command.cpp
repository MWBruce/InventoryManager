#include "../../includes/commands/update_product_price_command.h"

UpdateProductPriceCommand::UpdateProductPriceCommand(Catalog* catalog, int productId, double newPrice)
    : catalog(catalog), productId(productId), newPrice(newPrice) {}

void UpdateProductPriceCommand::execute() {
    catalog->updateProductPrice(productId, newPrice);
}
