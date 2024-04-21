#include "../includes/location.h"

int Location::currentId = 0;

Location::Location(Catalog* cat) : id(++currentId), inventory(std::make_unique<Inventory>(cat)), catalog(cat) {}

CommandResponse Location::executeCommand(CommandType type, const CommandQuery& query) {
    std::unique_ptr<Command> cmd = CommandFactory::createCommand(type, catalog, inventory.get(), query);
    CommandResponse response = cmd->execute();
    invoker.storeAndExecute(std::move(cmd));
    return response;
}
int Location::getId() const {
    return id;
}
