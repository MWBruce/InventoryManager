#include "../../includes/commands/command_query_factory.h"
#include "../../includes/commands/command_types.h"
#include <optional>

CommandQuery CommandQueryFactory::createQuery(CommandType type,
                                              std::optional<int> productId, 
                                              std::optional<int> supplierId, 
                                              std::optional<double> price, 
                                              std::optional<std::string> name, 
                                              std::optional<std::string> description) {
    CommandQuery query;
    query.productId = productId.value_or(0);
    query.supplierId = supplierId.value_or(0);
    query.price = price.value_or(0.0);
    query.name = name.value_or("");
    query.description = description.value_or("");

    return query;
}
