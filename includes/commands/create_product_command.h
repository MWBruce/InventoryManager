#ifndef CREATE_PRODUCT_COMMAND_H
#define CREATE_PRODUCT_COMMAND_H

#include "command.h"
#include "../catalog.h"
#include "command_response.h"
#include <string>

class CreateProductCommand : public Command {
private:
    Catalog* catalog;
    std::string name;
    double price;
    std::string description;
    int supplierId;

public:
    CreateProductCommand(Catalog* catalog, const std::string& name, double price, const std::string& description, int supplierId);
    CommandResponse execute() override;
};

#endif 
