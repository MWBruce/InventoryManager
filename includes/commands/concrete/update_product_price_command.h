#ifndef UPDATE_PRODUCT_PRICE_COMMAND_H
#define UPDATE_PRODUCT_PRICE_COMMAND_H

#include "../base/command.h"
#include "../catalog.h"
#include "command_response.h"
#include "../../queries/update_product_price_query.h"

class UpdateProductPriceCommand : public Command {
private:
    Catalog* catalog;
    int productId;
    double newPrice;

public:
    UpdateProductPriceCommand(Catalog* catalog, const UpdateProductPriceQuery& query);
    CommandResponse execute() override;
};

#endif
