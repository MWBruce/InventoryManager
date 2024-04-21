#ifndef CREATE_PRODUCT_COMMAND_H
#define CREATE_PRODUCT_COMMAND_H

#include "../base/command.h"
#include "../catalog.h"
#include "command_response.h"
#include "../queries/create_product_query.h"
#include <string>

class CreateProductCommand : public Command {
private:
    Catalog* catalog;
    std::string name;
    double price;
    std::string description;
    int supplierId;

public:
    CreateProductCommand(Catalog* catalog, const CreateProductQuery& query);
    CommandResponse execute() override;
};

#endif