#include <iostream>
#include <memory>

#include "includes/catalog.h"
#include "includes/commands/command_types.h"
#include "includes/commands/command_query.h"
#include "includes/commands/command_query_factory.h"
#include "includes/location.h"

int main() {
    Catalog mainCatalog;
    Location warehouse(&mainCatalog);

    auto printResponse = [](const CommandResponse& response) {
        std::cout << (response.success ? "Success: " : "Fail: ") << response.message << std::endl;
    };

    CommandQuery createQuery = CommandQueryFactory::createQuery(CreateProduct, {}, 1, 1200.00, "Product A", "Description of Product A");
    printResponse(warehouse.executeCommand(CreateProduct, createQuery));

    int productId = 1; 

    CommandQuery updateNameQuery = CommandQueryFactory::createQuery(UpdateProductName, productId, {}, {}, "Product A Updated");
    printResponse(warehouse.executeCommand(UpdateProductName, updateNameQuery));

    CommandQuery updatePriceQuery = CommandQueryFactory::createQuery(UpdateProductPrice, productId, {}, 1500.00);
    printResponse(warehouse.executeCommand(UpdateProductPrice, updatePriceQuery));

    CommandQuery updateDescriptionQuery = CommandQueryFactory::createQuery(UpdateProductDescription, productId, {}, {}, {}, "Updated Description of Product A");
    printResponse(warehouse.executeCommand(UpdateProductDescription, updateDescriptionQuery));

    CommandQuery updateSupplierIdQuery = CommandQueryFactory::createQuery(UpdateProductSupplierId, productId, 2);
    printResponse(warehouse.executeCommand(UpdateProductSupplierId, updateSupplierIdQuery));

    CommandQuery getNameQuery = CommandQueryFactory::createQuery(GetProductName, productId);
    printResponse(warehouse.executeCommand(GetProductName, getNameQuery));

    CommandQuery getPriceQuery = CommandQueryFactory::createQuery(GetProductPrice, productId);
    printResponse(warehouse.executeCommand(GetProductPrice, getPriceQuery));

    CommandQuery getDescriptionQuery = CommandQueryFactory::createQuery(GetProductDescription, productId);
    printResponse(warehouse.executeCommand(GetProductDescription, getDescriptionQuery));

    CommandQuery getSupplierIdQuery = CommandQueryFactory::createQuery(GetProductSupplierId, productId);
    printResponse(warehouse.executeCommand(GetProductSupplierId, getSupplierIdQuery));

    CommandQuery checkQuantityQuery = CommandQueryFactory::createQuery(CheckStoreProductQuantity, productId);
    printResponse(warehouse.executeCommand(CheckStoreProductQuantity, checkQuantityQuery));

    return 0;
}
    // Commands I need to have the store being able to do:
        // Update all details for any product (Done)
        // Get for product information (Done)
        // Create New Product (Done)
        // Check product count for any id (Done)
        // Handle Refunds
        // record sales
        // Requests more of a stock to stock requests object managed by catalog which will order from the specified suppliers and deliver
        // Handles payments(mixed payments allowed)
        // Searches for stock based on search strategy
        // Make receipt for orders
        // Manage Sales History
