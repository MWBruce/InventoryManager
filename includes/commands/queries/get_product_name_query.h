#ifndef GET_PRODUCT_NAME_QUERY_H
#define GET_PRODUCT_NAME_QUERY_H

#include "base/command_query.h"

class GetProductNameQuery : public CommandQuery {
private:
    int productId;

public:
    GetProductNameQuery(int productId);

    CommandType getCommandType() const override;

    int getProductId() const;
};

#endif
