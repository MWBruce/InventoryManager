#include "../../includes/commands/concrete/update_product_supplier_id_command.h"
#include "../../includes/commands/command_response.h"

CommandResponse UpdateProductSupplierIdCommand::execute() {
    catalog->updateSupplierId(productId, newSupplierId);
    return CommandResponse(true, "Product supplier ID updated");
}

UpdateProductSupplierIdCommand::UpdateProductSupplierIdCommand(Catalog* catalog, int productId, int newSupplierId)
    : catalog(catalog), productId(productId), newSupplierId(newSupplierId) {}
