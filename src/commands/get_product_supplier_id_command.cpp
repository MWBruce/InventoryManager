#include "../../includes/commands/get_product_supplier_id_command.h"
#include "../../includes/commands/command_response.h"

CommandResponse GetProductSupplierIdCommand::execute() {
    int supplierId = catalog->getProductSupplierId(productId);
    return CommandResponse(true, "Product supplier ID retrieved", supplierId);
}


GetProductSupplierIdCommand::GetProductSupplierIdCommand(Catalog* catalog, int productId)
    : catalog(catalog), productId(productId) {}
