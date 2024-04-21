#include "../../includes/commands/concrete/update_product_description_command.h"
#include "../../includes/commands/command_response.h"

UpdateProductDescriptionCommand::UpdateProductDescriptionCommand(Catalog* catalog, const UpdateProductDescriptionQuery& query)
    : catalog(catalog), productId(query.getProductId()), newDescription(query.getNewDescription()) {}


CommandResponse UpdateProductDescriptionCommand::execute() {
    catalog->updateProductDescription(productId, newDescription); 
    return CommandResponse(true, "Product description updated successfully.");
}
