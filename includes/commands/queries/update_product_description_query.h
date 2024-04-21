#ifndef UPDATE_PRODUCT_DESCRIPTION_QUERY_H
#define UPDATE_PRODUCT_DESCRIPTION_QUERY_H

#include "base/command_query.h"
#include <string>

class UpdateProductDescriptionQuery : public CommandQuery {
private:
    int productId;
    std::string newDescription;

public:
    UpdateProductDescriptionQuery(int productId, const std::string& newDescription);

    CommandType getCommandType() const;

    int getProductId() const;
    std::string getNewDescription() const;
};

#endif
