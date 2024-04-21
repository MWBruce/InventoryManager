#ifndef GET_PRODUCT_DESCRIPTION_QUERY_H
#define GET_PRODUCT_DESCRIPTION_QUERY_H

#include "base/command_query.h"

class GetProductDescriptionQuery : public CommandQuery {
private:
    int productId;

public:
    GetProductDescriptionQuery(int productId);

    CommandType getCommandType() const;
    
    int getProductId() const;
};

#endif
