#ifndef INVOKER_H
#define INVOKER_H

#include "../base/command.h"
#include <vector>
#include <memory>

class Invoker {
private:
    std::vector<std::unique_ptr<Command>> history;

public:
    void storeAndExecute(std::unique_ptr<Command> cmd);
};

#endif
