#ifndef GET_PRODUCT_SUPPLIER_ID_COMMAND_H
#define GET_PRODUCT_SUPPLIER_ID_COMMAND_H

#include "../base/command.h"
#include "../catalog.h"
#include "command_response.h"

class GetProductSupplierIdCommand : public Command {
private:
    Catalog* catalog;
    int productId;

public:
    GetProductSupplierIdCommand(Catalog* catalog, int productId);
    CommandResponse execute() override;
};

#endif
