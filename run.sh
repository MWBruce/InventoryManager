#!/bin/bash

cd "$(dirname "$0")"

EXECUTABLE="../retailApp"

# SOURCES="src/product.cpp src/inventory.cpp src/catalog.cpp src/location.cpp src/commands/create_product_command.cpp src/commands/update_product_price_command.cppsrc/commands/command_factory.cpp src/commands/invoker.cpp src/commands/delete_product_command.cpp \
# src/commands/check_store_product_quantity_command.cpp src/commands/update_product_name_command.cpp main.cpp"

SOURCES="src/product.cpp \
src/inventory.cpp \
src/catalog.cpp \
src/location.cpp \
src/commands/concrete/create_product_command.cpp \
src/commands/concrete/check_store_product_quantity_command.cpp \
src/commands/concrete/update_product_name_command.cpp \
src/commands/concrete/update_product_price_command.cpp \
src/commands/concrete/update_product_description_command.cpp \
src/commands/concrete/update_product_supplier_id_command.cpp \
src/commands/concrete/get_product_name_command.cpp \
src/commands/concrete/get_product_price_command.cpp \
src/commands/concrete/get_product_description_command.cpp \
src/commands/concrete/get_product_supplier_id_command.cpp \
src/commands/command_factory.cpp \
src/commands/utils/invoker.cpp \
src/commands/command_response.cpp \
main.cpp"

g++ -o $EXECUTABLE $SOURCES -Isrc -Iincludes -Isrc/commands -Iincludes/commands

if [ $? -eq 0 ]; then
    echo "Compilation successful."
    echo "Running the program:"
    $EXECUTABLE
    echo "Program Complete:"
else
    echo "Compilation failed."
fi
