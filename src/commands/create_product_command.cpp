#include "../../includes/commands/create_product_command.h"

CreateProductCommand::CreateProductCommand(Catalog* catalog, const std::string& name, double price, const std::string& description, int supplierId)
    : catalog(catalog), name(name), price(price), description(description), supplierId(supplierId) {}

void CreateProductCommand::execute() {
    catalog->createProduct(name, price, description, supplierId);
}
