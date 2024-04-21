#include <iostream>
#include <memory>

#include "includes/catalog.h"
#include "includes/commands/command_types.h"
#include "../includes/commands/queries/check_store_product_quantity_query.h"
#include "../includes/commands/queries/get_product_description_query.h"
#include "../includes/commands/queries/create_product_query.h"
#include "../includes/commands/queries/update_product_description_query.h"
#include "../includes/commands/queries/update_product_name_query.h"
#include "../includes/commands/queries/update_product_price_query.h"
#include "../includes/commands/queries/update_product_supplier_id_query.h"
#include "includes/commands/command_factory.h"
#include "includes/location.h"

int main() {
    Catalog mainCatalog;
    Location warehouse(&mainCatalog);

    auto printResponse = [](const CommandResponse& response) {
        std::cout << (response.success ? "Success: " : "Fail: ") << response.message;
        if (response.data.has_value()) {
            const std::type_info& type = response.data.type();
            if (type == typeid(int)) {
                std::cout << ": " << std::any_cast<int>(response.data);
            } else if (type == typeid(std::string)) {
                std::cout << ": " << std::any_cast<std::string>(response.data);
            } else {
                std::cout << ": Unhandled data type";
            }
        }
        std::cout << std::endl;
    };

    std::unique_ptr<CommandQuery> createQuery = std::make_unique<CreateProductQuery>("Product A", 1200.00, "Description of Product A", 1);
    printResponse(warehouse.executeCommand(*createQuery));

    int productId = 1;

    std::unique_ptr<CommandQuery> getDescriptionQuery = std::make_unique<GetProductDescriptionQuery>(productId);
    printResponse(warehouse.executeCommand(*getDescriptionQuery));

    std::unique_ptr<CommandQuery> checkQuantityQuery = std::make_unique<CheckStoreProductQuantityQuery>(productId);
    printResponse(warehouse.executeCommand(*checkQuantityQuery));

    std::unique_ptr<CommandQuery> getNameQuery = std::make_unique<GetProductNameQuery>(productId);
    printResponse(warehouse.executeCommand(*getNameQuery));

    std::unique_ptr<CommandQuery> getPriceQuery = std::make_unique<GetProductPriceQuery>(productId);
    printResponse(warehouse.executeCommand(*getPriceQuery));

    std::unique_ptr<CommandQuery> getSupplierIdQuery = std::make_unique<GetProductSupplierIdQuery>(productId);
    printResponse(warehouse.executeCommand(*getSupplierIdQuery));

    std::unique_ptr<CommandQuery> updateDescriptionQuery = std::make_unique<UpdateProductDescriptionQuery>(productId, "New description for Product A");
    printResponse(warehouse.executeCommand(*updateDescriptionQuery));

    std::unique_ptr<CommandQuery> updateNameQuery = std::make_unique<UpdateProductNameQuery>(productId, "New Product Name A");
    printResponse(warehouse.executeCommand(*updateNameQuery));

    std::unique_ptr<CommandQuery> updatePriceQuery = std::make_unique<UpdateProductPriceQuery>(productId, 1300.00);
    printResponse(warehouse.executeCommand(*updatePriceQuery));

    std::unique_ptr<CommandQuery> updateSupplierIdQuery = std::make_unique<UpdateProductSupplierIdQuery>(productId, 2);
    printResponse(warehouse.executeCommand(*updateSupplierIdQuery));

    return 0;
}
