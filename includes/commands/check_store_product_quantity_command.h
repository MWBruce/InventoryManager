#ifndef CHECK_STORE_PRODUCT_QUANTITY_COMMAND_H
#define CHECK_STORE_PRODUCT_QUANTITY_COMMAND_H

#include "command.h"
#include "../inventory.h"

class CheckStoreProductQuantityCommand : public Command {
private:
    Inventory* inventory;
    int productId;

public:
    CheckStoreProductQuantityCommand(Inventory* inventory, int productId);
    void execute() override;
};

#endif
