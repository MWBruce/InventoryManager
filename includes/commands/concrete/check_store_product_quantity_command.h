#ifndef CHECK_STORE_PRODUCT_QUANTITY_COMMAND_H
#define CHECK_STORE_PRODUCT_QUANTITY_COMMAND_H

#include "../base/command.h"
#include "../inventory.h"
#include "command_response.h"

class CheckStoreProductQuantityCommand : public Command {
private:
    Inventory* inventory;
    int productId;

public:
    CheckStoreProductQuantityCommand(Inventory* inventory, int productId);
    CommandResponse execute() override;
};

#endif