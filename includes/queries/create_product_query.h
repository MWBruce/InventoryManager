#ifndef CREATE_PRODUCT_QUERY_H
#define CREATE_PRODUCT_QUERY_H

#include "base/command_query.h"
#include <string>

class CreateProductQuery : public CommandQuery {
private:
    std::string name;
    double price;
    std::string description;
    int supplierId;

public:
    CreateProductQuery(const std::string& name, double price, const std::string& description, int supplierId);

    CommandType getCommandType() const;

    std::string getName() const;
    double getPrice() const;
    std::string getDescription() const;
    int getSupplierId() const;
};

#endif
