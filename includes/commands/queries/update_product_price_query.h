#ifndef UPDATE_PRODUCT_PRICE_QUERY_H
#define UPDATE_PRODUCT_PRICE_QUERY_H

#include "base/command_query.h"

class UpdateProductPriceQuery : public CommandQuery {
private:
    int productId;
    double newPrice;

public:
    UpdateProductPriceQuery(int productId, double newPrice);

    CommandType getCommandType() const override;

    int getProductId() const;
    double getNewPrice() const;
};

#endif
