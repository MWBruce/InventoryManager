#ifndef UPDATE_PRODUCT_SUPPLIER_ID_COMMAND_H
#define UPDATE_PRODUCT_SUPPLIER_ID_COMMAND_H

#include "command.h"
#include "../catalog.h"

class UpdateProductSupplierIdCommand : public Command {
private:
    Catalog* catalog;
    int productId;
    int newSupplierId;

public:
    UpdateProductSupplierIdCommand(Catalog* catalog, int productId, int newSupplierId);
    void execute() override;
};

#endif
