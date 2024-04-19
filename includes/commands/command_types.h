#ifndef COMMAND_TYPES_H
#define COMMAND_TYPES_H

enum CommandType {
    CreateProduct,
    DeleteProduct,
    CheckStoreProductQuantity,
    CheckAllStoresProductQuantity,
    UpdateProductName,
    RequestGoodsFromSupplier,
    ProcessRefund
};
#endif
