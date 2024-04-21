#ifndef GET_PRODUCT_DESCRIPTION_COMMAND_H
#define GET_PRODUCT_DESCRIPTION_COMMAND_H

#include "../base/command.h"
#include "../catalog.h"
#include "command_response.h"
#include "../../queries/get_product_description_query.h"

class GetProductDescriptionCommand : public Command {
private:
    Catalog* catalog;
    int productId;

public:
    GetProductDescriptionCommand(Catalog* catalog, const GetProductDescriptionQuery& query);

    CommandResponse execute() override;
};

#endif
