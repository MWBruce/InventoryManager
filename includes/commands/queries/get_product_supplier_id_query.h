#ifndef GET_PRODUCT_SUPPLIER_ID_QUERY_H
#define GET_PRODUCT_SUPPLIER_ID_QUERY_H

#include "base/command_query.h"

class GetProductSupplierIdQuery : public CommandQuery {
private:
    int productId;

public:
    GetProductSupplierIdQuery(int productId);

    CommandType getCommandType() const override;

    int getProductId() const;
};

#endif
