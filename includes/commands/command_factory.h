#ifndef COMMAND_FACTORY_H
#define COMMAND_FACTORY_H

#include "command.h"
#include "create_product_command.h"
#include "delete_product_command.h"
#include "check_store_product_quantity_command.h"
#include "update_product_name_command.h"
#include "command_types.h"
#include "../catalog.h"
#include <memory>
#include <stdexcept>

class CommandFactory {
public:
    static std::unique_ptr<Command> createCommand(CommandType type, Catalog* catalog, Inventory* inventory, const std::string& name, double price, const std::string& description, int supplierId, int productId);
};

#endif 
