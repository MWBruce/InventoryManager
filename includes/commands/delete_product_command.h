#ifndef DELETE_PRODUCT_COMMAND_H
#define DELETE_PRODUCT_COMMAND_H

#include "command.h"
#include "../inventory.h"
#include "command_response.h"

class DeleteProductCommand : public Command {
private:
    Inventory* inventory;
    int productId;

public:
    DeleteProductCommand(Inventory* inventory, int productId);
    CommandResponse execute() override;
};

#endif
