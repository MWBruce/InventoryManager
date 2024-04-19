#include "../../includes/commands/create_product_command.h"
#include "../../includes/commands/command_response.h"

CommandResponse CreateProductCommand::execute() {
    int newProductId = catalog->createProduct(name, price, description, supplierId);
    return newProductId != -1 ? CommandResponse(true, "Product created", newProductId) : CommandResponse(false, "Failed to create product");
}

CreateProductCommand::CreateProductCommand(Catalog* catalog, const std::string& name, double price, const std::string& description, int supplierId)
    : catalog(catalog), name(name), price(price), description(description), supplierId(supplierId) {}
