#!/bin/bash

cd "$(dirname "$0")"

EXECUTABLE="../retailApp"

SOURCES="src/product.cpp src/inventory.cpp src/catalog.cpp src/location.cpp src/commands/create_product_command.cpp src/commands/command_factory.cpp src/commands/invoker.cpp src/commands/delete_product_command.cpp \
src/commands/check_store_product_quantity_command.cpp src/commands/update_product_name_command.cpp main.cpp"

g++ -o $EXECUTABLE $SOURCES -Isrc -Iincludes -Isrc/commands -Iincludes/commands

if [ $? -eq 0 ]; then
    echo "Compilation successful."
    echo "Running the program:"
    $EXECUTABLE
    echo "Program Complete:"
else
    echo "Compilation failed."
fi
