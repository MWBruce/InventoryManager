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

    mainCatalog.displayProducts();

    warehouse.executeCommand(UpdateProductName, "Second ", 0, "", 0, productId);

    mainCatalog.displayProducts();

    warehouse.executeCommand(DeleteProduct, "", 0, "", 0, productId);

    warehouse.executeCommand(CheckStoreProductQuantity, "", 0, "", 0, productId);

    return 0;
}
