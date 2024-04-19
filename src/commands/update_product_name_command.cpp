#include "../../includes/commands/update_product_name_command.h"

UpdateProductNameCommand::UpdateProductNameCommand(Catalog* catalog, int productId, const std::string& newName)
    : catalog(catalog), productId(productId), newName(newName) {}

void UpdateProductNameCommand::execute() {
    catalog->updateProductName(productId, newName);
}
