#include "../../includes/commands/command_factory.h"

std::unique_ptr<Command> CommandFactory::createCommand(CommandType type, Catalog* catalog, Inventory* inventory, const std::string& name, double price, const std::string& description, int supplierId, int productId) {
    switch (type) {
        case CreateProduct:
            return std::make_unique<CreateProductCommand>(catalog, name, price, description, supplierId);
        case DeleteProduct:
            return std::make_unique<DeleteProductCommand>(inventory, productId);
        case CheckStoreProductQuantity:
            return std::make_unique<CheckStoreProductQuantityCommand>(inventory, productId);
        case UpdateProductName:
            return std::make_unique<UpdateProductNameCommand>(catalog, productId, name);
        default:
            throw std::invalid_argument("Unknown command type");
    }
}
