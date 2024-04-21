#ifndef LOCATION_H
#define LOCATION_H

#include "inventory.h"
#include "commands/utils/invoker.h"
#include "commands/command_factory.h"
#include "commands/command_types.h"
#include "commands/command_response.h"
#include <memory>

class Location {
protected:
    static int currentId;
    int id;
    std::unique_ptr<Inventory> inventory;
    Invoker invoker;
    Catalog* catalog;

public:
    Location(Catalog* catalog);
    ~Location() {}

    CommandResponse executeCommand(CommandType type, const CommandQuery& query);
    int getId() const;
};

#endif 