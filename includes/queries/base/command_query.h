#ifndef COMMAND_QUERY_H
#define COMMAND_QUERY_H

#include "command_types.h"
#include <string>

class CommandQuery {
public:
    virtual ~CommandQuery() {}
    virtual CommandType getCommandType() const = 0;
};

#endif
