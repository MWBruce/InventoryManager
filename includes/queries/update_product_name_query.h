#ifndef UPDATE_PRODUCT_NAME_QUERY_H
#define UPDATE_PRODUCT_NAME_QUERY_H

#include "base/command_query.h"
#include <string>

class UpdateProductNameQuery : public CommandQuery {
private:
    int productId;
    std::string newName;

public:
    UpdateProductNameQuery(int productId, const std::string& newName);

    CommandType getCommandType() const override;

    int getProductId() const;
    std::string getNewName() const;
};

#endif
