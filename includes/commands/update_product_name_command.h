#ifndef UPDATE_PRODUCT_NAME_COMMAND_H
#define UPDATE_PRODUCT_NAME_COMMAND_H

#include "command.h"
#include "../catalog.h"

class UpdateProductNameCommand : public Command {
private:
    Catalog* catalog;
    int productId;
    std::string newName;

public:
    UpdateProductNameCommand(Catalog* catalog, int productId, const std::string& newName);
    void execute() override;
};

#endif 
