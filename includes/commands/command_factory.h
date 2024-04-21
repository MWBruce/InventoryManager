#ifndef COMMAND_FACTORY_H
#define COMMAND_FACTORY_H

#include "../catalog.h"
#include "../inventory.h"
#include "command_query.h"
#include "base/command.h"
#include "command_types.h"
#include "concrete/create_product_command.h"
#include "concrete/check_store_product_quantity_command.h"
#include "concrete/update_product_name_command.h"
#include "concrete/update_product_price_command.h"
#include "concrete/update_product_description_command.h"
#include "concrete/update_product_supplier_id_command.h"
#include "concrete/get_product_name_command.h"
#include "concrete/get_product_price_command.h"
#include "concrete/get_product_description_command.h"
#include "concrete/get_product_supplier_id_command.h"

#include <memory>
#include <stdexcept>

class CommandFactory {
public:
    static std::unique_ptr<Command> createCommand(CommandType type, Catalog* catalog, Inventory* inventory, const CommandQuery& query);
};

#endif
