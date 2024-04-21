#ifndef GET_PRODUCT_SUPPLIER_ID_COMMAND_H
#define GET_PRODUCT_SUPPLIER_ID_COMMAND_H

#include "../base/command.h"
#include "command_response.h"
#include "../../queries/get_product_supplier_id_query.h"
#include "../catalog.h"

class GetProductSupplierIdCommand : public Command {
private:
    Catalog* catalog;
    int productId;

public:
    GetProductSupplierIdCommand(Catalog* catalog, const GetProductSupplierIdQuery& query);

    CommandResponse execute() override;
};

#endif
