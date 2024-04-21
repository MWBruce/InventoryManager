#ifndef GET_PRODUCT_PRICE_COMMAND_H
#define GET_PRODUCT_PRICE_COMMAND_H

#include "../base/command.h"
#include "command_response.h"
#include "../queries/get_product_price_query.h"
#include "../catalog.h"

class GetProductPriceCommand : public Command {
private:
    Catalog* catalog;
    int productId;

public:
    GetProductPriceCommand(Catalog* catalog, const GetProductPriceQuery& query);

    CommandResponse execute() override;
};

#endif
