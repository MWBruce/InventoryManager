#ifndef COMMAND_QUERY_H
#define COMMAND_QUERY_H

#include <string>

class CommandQuery {
public:
    int productId;
    int supplierId;
    double price;
    std::string name;
    std::string description;

    CommandQuery(int productId = 0, int supplierId = 0, double price = 0.0, 
                 std::string name = "", std::string description = "");
};

#endif 