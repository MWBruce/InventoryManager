#ifndef UPDATE_PRODUCT_DESCRIPTION_COMMAND_H
#define UPDATE_PRODUCT_DESCRIPTION_COMMAND_H

#include "command.h"
#include "../catalog.h"

class UpdateProductDescriptionCommand : public Command {
private:
    Catalog* catalog;
    int productId;
    std::string newDescription;

public:
    UpdateProductDescriptionCommand(Catalog* catalog, int productId, const std::string& newDescription);
    void execute() override;
};

#endif
