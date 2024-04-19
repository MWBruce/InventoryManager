#include "../../includes/commands/update_product_description_command.h"

UpdateProductDescriptionCommand::UpdateProductDescriptionCommand(Catalog* catalog, int productId, const std::string& newDescription)
    : catalog(catalog), productId(productId), newDescription(newDescription) {}

void UpdateProductDescriptionCommand::execute() {
    catalog->updateProductDescription(productId, newDescription);
}
