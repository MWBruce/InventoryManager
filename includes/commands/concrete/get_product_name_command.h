#ifndef GET_PRODUCT_NAME_COMMAND_H
#define GET_PRODUCT_NAME_COMMAND_H

#include "../base/command.h"
#include "../catalog.h"
#include "command_response.h"

class GetProductNameCommand : public Command {
private:
    Catalog* catalog;
    int productId;

public:
    GetProductNameCommand(Catalog* catalog, int productId);
    CommandResponse execute() override;
};

#endif
