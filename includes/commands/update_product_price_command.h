#ifndef UPDATE_PRODUCT_PRICE_COMMAND_H
#define UPDATE_PRODUCT_PRICE_COMMAND_H

#include "command.h"
#include "../catalog.h"
#include "command_response.h"

class UpdateProductPriceCommand : public Command {
private:
    Catalog* catalog;
    int productId;
    double newPrice;

public:
    UpdateProductPriceCommand(Catalog* catalog, int productId, double newPrice);
    CommandResponse execute() override;
};

#endif
