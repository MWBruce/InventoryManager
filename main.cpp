#include <iostream>
#include <memory>

#include "includes/catalog.h"
#include "includes/commands/command_types.h"
#include "includes/location.h"

int main() {
    Catalog mainCatalog;
    Location warehouse(&mainCatalog);

    warehouse.executeCommand(CreateProduct, "Product A", 1200.00, "Description of Product A", 1, 0);
    int productId = 1;
    warehouse.executeCommand(UpdateProductName, "Product A Updated", 0, "", 0, productId);
    warehouse.executeCommand(UpdateProductPrice, "", 1500.00, "", 0, productId);
    warehouse.executeCommand(UpdateProductDescription, "", 0, "Updated Description of Product A", 0, productId);
    warehouse.executeCommand(UpdateProductSupplierId, "", 0, "", 2, productId);
    warehouse.executeCommand(GetProductName, "", 0, "", 0, productId);
    warehouse.executeCommand(GetProductPrice, "", 0, "", 0, productId);
    warehouse.executeCommand(GetProductDescription, "", 0, "", 0, productId);
    warehouse.executeCommand(GetProductSupplierId, "", 0, "", 0, productId);

    return 0;
}
    // Commands I need to have the store being able to do:
        // Update all details for any product (Done)
        // Get for product information (Done)
        // Create New Product (Done)
        // Delete Products For Current Inv (Done)
        // Check product count for any id (Done)
        // Handle Refunds
        // Requests more of a stock to stock requests object managed by catalog which will order from the specified suppliers
        // Handles payments(mixed payments allowed)
        // Searches for stock based on search strategy
        // Make receipt for orders
        // Manage Sales History
