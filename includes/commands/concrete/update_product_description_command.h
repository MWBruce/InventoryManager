#ifndef UPDATE_PRODUCT_DESCRIPTION_COMMAND_H
#define UPDATE_PRODUCT_DESCRIPTION_COMMAND_H

#include "../base/command.h"
#include "../catalog.h"
#include "command_response.h"
#include "../queries/update_product_description_query.h"

class UpdateProductDescriptionCommand : public Command {
private:
    Catalog* catalog;
    int productId;
    std::string newDescription;

public:
    UpdateProductDescriptionCommand(Catalog* catalog, const UpdateProductDescriptionQuery& query);
    CommandResponse execute() override;
};

#endif
