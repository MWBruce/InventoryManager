#ifndef UPDATE_PRODUCT_SUPPLIER_ID_QUERY_H
#define UPDATE_PRODUCT_SUPPLIER_ID_QUERY_H

#include "base/command_query.h"

class UpdateProductSupplierIdQuery : public CommandQuery {
private:
    int productId;
    int newSupplierId;

public:
    UpdateProductSupplierIdQuery(int productId, int newSupplierId);

    CommandType getCommandType() const override;

    int getProductId() const;

    int getNewSupplierId() const;
};

#endif
