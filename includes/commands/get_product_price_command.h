#ifndef GET_PRODUCT_PRICE_COMMAND_H
#define GET_PRODUCT_PRICE_COMMAND_H

#include "command.h"
#include "../catalog.h"

class GetProductPriceCommand : public Command {
private:
    Catalog* catalog;
    int productId;

public:
    GetProductPriceCommand(Catalog* catalog, int productId);
    void execute() override;
};

#endif
