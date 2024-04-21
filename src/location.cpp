#include "../includes/location.h"

int Location::currentId = 0;

Location::Location(Catalog* cat) : id(++currentId), inventory(std::make_unique<Inventory>(cat)), catalog(cat) {}

CommandResponse Location::executeCommand(const CommandQuery& query) {
    std::unique_ptr<Command> cmd = CommandFactory::createCommand(query, catalog, inventory.get());
    CommandResponse response = cmd->execute();
    invoker.storeAndExecute(std::move(cmd));
    return response;
}

int Location::getId() const {
    return id;
}
