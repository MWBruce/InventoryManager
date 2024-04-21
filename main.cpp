#include <iostream>
#include <memory>

#include "includes/catalog.h"
#include "includes/commands/command_types.h"
#include "includes/location.h"

int main() {
    Catalog mainCatalog;
    Location warehouse(&mainCatalog);

    auto printResponse = [](const CommandResponse& response) {
        std::cout << (response.success ? "Success: " : "Fail: ") << response.message << std::endl;
    };

    printResponse(warehouse.executeCommand(CreateProduct, "Product A", 1200.00, "Description of Product A", 1, 0));
    int productId = 1; 
    printResponse(warehouse.executeCommand(UpdateProductName, "Product A Updated", 0, "", 0, productId));
    printResponse(warehouse.executeCommand(UpdateProductPrice, "", 1500.00, "", 0, productId));
    printResponse(warehouse.executeCommand(UpdateProductDescription, "", 0, "Updated Description of Product A", 0, productId));
    printResponse(warehouse.executeCommand(UpdateProductSupplierId, "", 0, "", 2, productId));
    printResponse(warehouse.executeCommand(GetProductName, "", 0, "", 0, productId));
    printResponse(warehouse.executeCommand(GetProductPrice, "", 0, "", 0, productId));
    printResponse(warehouse.executeCommand(GetProductDescription, "", 0, "", 0, productId));
    printResponse(warehouse.executeCommand(GetProductSupplierId, "", 0, "", 0, productId));
    printResponse(warehouse.executeCommand(CheckStoreProductQuantity, "", 0, "", 0, productId));

    return 0;
}
    // Commands I need to have the store being able to do:
        // Update all details for any product (Done)
        // Get for product information (Done)
        // Create New Product (Done)
        // Delete Products For Current Inv (Done)
        // Check product count for any id (Done)
        // Handle Refunds
        // record sales
        // Requests more of a stock to stock requests object managed by catalog which will order from the specified suppliers and deliver
        // Handles payments(mixed payments allowed)
        // Searches for stock based on search strategy
        // Make receipt for orders
        // Manage Sales History
