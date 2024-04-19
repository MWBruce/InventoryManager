#ifndef GET_PRODUCT_SUPPLIER_ID_COMMAND_H
#define GET_PRODUCT_SUPPLIER_ID_COMMAND_H

#include "command.h"
#include "../catalog.h"

class GetProductSupplierIdCommand : public Command {
private:
    Catalog* catalog;
    int productId;

public:
    GetProductSupplierIdCommand(Catalog* catalog, int productId);
    void execute() override;
};

#endif
