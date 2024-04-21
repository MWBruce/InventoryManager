#ifndef GET_PRODUCT_NAME_COMMAND_H
#define GET_PRODUCT_NAME_COMMAND_H

#include "../base/command.h"
#include "command_response.h"
#include "../catalog.h"
#include "../queries/get_product_name_query.h"

class GetProductNameCommand : public Command {
private:
    Catalog* catalog;
    int productId;

public:
    GetProductNameCommand(Catalog* catalog, const GetProductNameQuery& query);

    CommandResponse execute() override;
};

#endif
