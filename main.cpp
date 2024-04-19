#include <iostream>
#include <memory>

#include "includes/catalog.h"
#include "includes/commands/command_types.h"
#include "includes/location.h"

int main() {
    Catalog mainCatalog;
    Location warehouse(&mainCatalog);

    int productId = 1; 
    warehouse.executeCommand(CreateProduct, "First", 1200.00, "First bio", 1, productId);

    warehouse.executeCommand(UpdateProductName, "Second ", 0, "", 0, productId);

    warehouse.executeCommand(DeleteProduct, "", 0, "", 0, productId);

    warehouse.executeCommand(CheckStoreProductQuantity, "", 0, "", 0, productId);


    // Commands I need to have the store being able to do:
        // Update all details for any product (Started)
        // Get for product information
        // Create New Product (Done)
        // Delete Products For Current Inv (Done)
        // Check product count for any id (Done)
        // Get for product information
        // Handle Refunds
        // Requests more of a stock to stock requests object managed by catalog which will order from the specified suppliers
        // Handles payments(mixed payments allowed)
        // Searches for stock based on search strategy
        // Make receipt for orders
        // Manage Sales History

    return 0;
}
