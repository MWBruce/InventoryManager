#ifndef GET_PRODUCT_NAME_COMMAND_H
#define GET_PRODUCT_NAME_COMMAND_H

#include "command.h"
#include "../catalog.h"

class GetProductNameCommand : public Command {
private:
    Catalog* catalog;
    int productId;

public:
    GetProductNameCommand(Catalog* catalog, int productId);
    void execute() override;
};

#endif
