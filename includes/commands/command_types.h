#ifndef COMMAND_TYPES_H
#define COMMAND_TYPES_H

enum CommandType {
    CreateProduct,
    DeleteProduct,
    CheckStoreProductQuantity,
    UpdateProductName,
    UpdateProductPrice,
    UpdateProductDescription,
    UpdateProductSupplierId,
    GetProductName,
    GetProductPrice,
    GetProductDescription,
    GetProductSupplierId
};

#endif
