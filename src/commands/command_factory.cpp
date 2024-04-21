#include "../../includes/commands/command_factory.h"

std::unique_ptr<Command> CommandFactory::createCommand(CommandType type, Catalog* catalog, Inventory* inventory, const CommandQuery& query) {
    switch (type) {
        case CreateProduct:
            return std::make_unique<CreateProductCommand>(catalog, query.name, query.price, query.description, query.supplierId);
        case CheckStoreProductQuantity:
            return std::make_unique<CheckStoreProductQuantityCommand>(inventory, query.productId);
        case UpdateProductName:
            return std::make_unique<UpdateProductNameCommand>(catalog, query.productId, query.name);
        case UpdateProductPrice:
            return std::make_unique<UpdateProductPriceCommand>(catalog, query.productId, query.price);
        case UpdateProductDescription:
            return std::make_unique<UpdateProductDescriptionCommand>(catalog, query.productId, query.description);
        case UpdateProductSupplierId:
            return std::make_unique<UpdateProductSupplierIdCommand>(catalog, query.productId, query.supplierId);
        case GetProductName:
            return std::make_unique<GetProductNameCommand>(catalog, query.productId);
        case GetProductPrice:
            return std::make_unique<GetProductPriceCommand>(catalog, query.productId);
        case GetProductDescription:
            return std::make_unique<GetProductDescriptionCommand>(catalog, query.productId);
        case GetProductSupplierId:
            return std::make_unique<GetProductSupplierIdCommand>(catalog, query.productId);
        default:
            throw std::invalid_argument("Unknown command type");
    }
}


