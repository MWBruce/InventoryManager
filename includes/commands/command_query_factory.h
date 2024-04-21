#ifndef COMMAND_QUERY_FACTORY_H
#define COMMAND_QUERY_FACTORY_H

#include "command_query.h"
#include "command_types.h"
#include <string>
#include <optional>

class CommandQueryFactory {
public:
    static CommandQuery createQuery(CommandType type, 
                                    std::optional<int> productId = {}, 
                                    std::optional<int> supplierId = {}, 
                                    std::optional<double> price = {}, 
                                    std::optional<std::string> name = {}, 
                                    std::optional<std::string> description = {});
};

#endif 
