#ifndef CHECK_STORE_PRODUCT_QUANTITY_COMMAND_H
#define CHECK_STORE_PRODUCT_QUANTITY_COMMAND_H

#include "../base/command.h"
#include "../inventory.h"
#include "command_response.h"
#include "../queries/check_store_product_quantity_query.h"

class CheckStoreProductQuantityCommand : public Command {
private:
    Inventory* inventory;
    int productId;

public:
    CheckStoreProductQuantityCommand(Inventory* inventory, const CheckStoreProductQuantityQuery& query)
        : inventory(inventory), productId(query.getProductId()) {}

    CommandResponse execute() override;
};

#endif