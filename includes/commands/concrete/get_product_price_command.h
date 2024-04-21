#ifndef GET_PRODUCT_PRICE_COMMAND_H
#define GET_PRODUCT_PRICE_COMMAND_H

#include "../base/command.h"
#include "../catalog.h"
#include "command_response.h"

class GetProductPriceCommand : public Command {
private:
    Catalog* catalog;
    int productId;

public:
    GetProductPriceCommand(Catalog* catalog, int productId);
    CommandResponse execute() override;
};

#endif
