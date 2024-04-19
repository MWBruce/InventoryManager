#ifndef GET_PRODUCT_DESCRIPTION_COMMAND_H
#define GET_PRODUCT_DESCRIPTION_COMMAND_H

#include "command.h"
#include "../catalog.h"

class GetProductDescriptionCommand : public Command {
private:
    Catalog* catalog;
    int productId;

public:
    GetProductDescriptionCommand(Catalog* catalog, int productId);
    void execute() override;
};

#endif
