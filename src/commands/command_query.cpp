#include "../../includes/commands/command_query.h"
    
CommandQuery::CommandQuery(int productId, int supplierId, double price, 
                           std::string name, std::string description)
    : productId(productId), supplierId(supplierId), price(price), 
      name(std::move(name)), description(std::move(description)) {}
