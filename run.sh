#!/bin/bash

cd "$(dirname "$0")"

EXECUTABLE="../retailApp"

SOURCES="src/product.cpp \
src/inventory.cpp \
src/catalog.cpp \
src/location.cpp \
src/commands/concrete/create_product_command.cpp \
src/commands/concrete/check_store_product_quantity_command.cpp \
src/commands/concrete/update_product_name_command.cpp \
src/commands/concrete/update_product_price_command.cpp \
src/commands/concrete/update_product_supplier_id_command.cpp \
src/commands/concrete/get_product_name_command.cpp \
src/commands/concrete/get_product_price_command.cpp \
src/commands/concrete/get_product_description_command.cpp \
src/commands/concrete/get_product_supplier_id_command.cpp \
src/commands/command_factory.cpp \
src/commands/utils/invoker.cpp \
src/commands/command_response.cpp \
src/commands/queries/create_product_query.cpp \
src/commands/queries/get_product_description_query.cpp \
src/commands/queries/check_store_product_quantity_query.cpp \
src/commands/queries/get_product_name_query.cpp \
src/commands/queries/get_product_price_query.cpp \
src/commands/queries/get_product_supplier_id_query.cpp \
src/commands/queries/update_product_name_query.cpp \
src/commands/queries/update_product_price_query.cpp \
src/commands/queries/update_product_supplier_id_query.cpp \
src/commands/concrete/update_product_description_command.cpp \
src/commands/queries/update_product_description_query.cpp \
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
