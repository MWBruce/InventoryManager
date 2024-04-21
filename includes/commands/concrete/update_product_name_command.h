#ifndef UPDATE_PRODUCT_NAME_COMMAND_H
#define UPDATE_PRODUCT_NAME_COMMAND_H

#include "../base/command.h"
#include "../catalog.h"
#include "command_response.h"
#include "../queries/update_product_name_query.h"

class UpdateProductNameCommand : public Command {
private:
    Catalog* catalog;
    int productId;
    std::string newName;

public:
    UpdateProductNameCommand(Catalog* catalog, const UpdateProductNameQuery& query);
    CommandResponse execute() override;
};

#endif
