#include "../../includes/commands/command_factory.h"

std::unique_ptr<Command> CommandFactory::createCommand(const CommandQuery& query, Catalog* catalog, Inventory* inventory) {
    switch (query.getCommandType()) {
        case CheckStoreProductQuantity: {
            const auto& specificQuery = static_cast<const CheckStoreProductQuantityQuery&>(query);
            return std::make_unique<CheckStoreProductQuantityCommand>(inventory, specificQuery);
        }
        case CreateProduct: {
            const auto& specificQuery = static_cast<const CreateProductQuery&>(query);
            return std::make_unique<CreateProductCommand>(catalog, specificQuery);
        }
        case GetProductDescription: {
            const auto& specificQuery = static_cast<const GetProductDescriptionQuery&>(query);
            return std::make_unique<GetProductDescriptionCommand>(catalog, specificQuery);
        }
        case GetProductName: {
            const auto& specificQuery = static_cast<const GetProductNameQuery&>(query);
            return std::make_unique<GetProductNameCommand>(catalog, specificQuery);
        }
        case GetProductPrice: {
            const auto& specificQuery = static_cast<const GetProductPriceQuery&>(query);
            return std::make_unique<GetProductPriceCommand>(catalog, specificQuery);
        }
        case GetProductSupplierId: {
            const auto& specificQuery = static_cast<const GetProductSupplierIdQuery&>(query);
            return std::make_unique<GetProductSupplierIdCommand>(catalog, specificQuery);
        }
        case UpdateProductDescription: {
            const auto& specificQuery = static_cast<const UpdateProductDescriptionQuery&>(query);
            return std::make_unique<UpdateProductDescriptionCommand>(catalog, specificQuery);
        }
        case UpdateProductName: {
            const auto& specificQuery = static_cast<const UpdateProductNameQuery&>(query);
            return std::make_unique<UpdateProductNameCommand>(catalog, specificQuery);
        }
        case UpdateProductPrice: {
            const auto& specificQuery = static_cast<const UpdateProductPriceQuery&>(query);
            return std::make_unique<UpdateProductPriceCommand>(catalog, specificQuery);
        }
        case UpdateProductSupplierId: {
            const auto& specificQuery = static_cast<const UpdateProductSupplierIdQuery&>(query);
            return std::make_unique<UpdateProductSupplierIdCommand>(catalog, specificQuery);
        }
        default:
            throw std::invalid_argument("Unknown command type");
    }
}
