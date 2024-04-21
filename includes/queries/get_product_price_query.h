#ifndef GET_PRODUCT_PRICE_QUERY_H
#define GET_PRODUCT_PRICE_QUERY_H

#include "base/command_query.h"

class GetProductPriceQuery : public CommandQuery {
private:
    int productId;

public:
    GetProductPriceQuery(int productId);

    CommandType getCommandType() const override;

    int getProductId() const;
};

#endif
