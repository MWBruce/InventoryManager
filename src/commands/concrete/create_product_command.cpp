#include "../../includes/commands/concrete/create_product_command.h"
#include "../../includes/commands/command_response.h"

CreateProductCommand::CreateProductCommand(Catalog* catalog, const CreateProductQuery& query)
    : catalog(catalog), name(query.getName()), price(query.getPrice()), description(query.getDescription()), supplierId(query.getSupplierId()) {}


CommandResponse CreateProductCommand::execute() {
    int newProductId = catalog->createProduct(name, price, description, supplierId);
    if (newProductId != -1) {
        return CommandResponse(true, "Product created successfully", newProductId);
    } else {
        return CommandResponse(false, "Failed to create product");
    }
}
