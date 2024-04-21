#ifndef COMMAND_H
#define COMMAND_H

#include "command_response.h"

class Command {
public:
    virtual ~Command() {}
    virtual CommandResponse execute() = 0;
};

#endif 