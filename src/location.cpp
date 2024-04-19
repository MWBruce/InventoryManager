#include "../includes/location.h"

int Location::currentId = 0;

Location::Location(Catalog* cat) : id(++currentId), inventory(std::make_unique<Inventory>(cat)), catalog(cat) {}

void Location::executeCommand(CommandType type, const std::string& name, double price, const std::string& description, int supplierId, int productId) {
    std::unique_ptr<Command> cmd = CommandFactory::createCommand(type, catalog, inventory.get(), name, price, description, supplierId, productId);
    invoker.storeAndExecute(std::move(cmd));
}

int Location::getId() const {
    return id;
}