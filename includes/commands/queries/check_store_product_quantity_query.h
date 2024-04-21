#ifndef CHECK_STORE_PRODUCT_QUANTITY_QUERY_H
#define CHECK_STORE_PRODUCT_QUANTITY_QUERY_H

#include "base/command_query.h"

class CheckStoreProductQuantityQuery : public CommandQuery {
private:
    int productId;

public:
    CheckStoreProductQuantityQuery(int productId);

    CommandType getCommandType() const override;

    int getProductId() const;
};

#endif
