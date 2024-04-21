#include "../../includes/commands/utils/invoker.h"

void Invoker::storeAndExecute(std::unique_ptr<Command> cmd) {
    if (cmd) {
        cmd->execute();
        history.push_back(std::move(cmd)); 
    }
}
