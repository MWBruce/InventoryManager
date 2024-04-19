#include "../../includes/commands/update_product_supplier_id_command.h"

UpdateProductSupplierIdCommand::UpdateProductSupplierIdCommand(Catalog* catalog, int productId, int newSupplierId)
    : catalog(catalog), productId(productId), newSupplierId(newSupplierId) {}

void UpdateProductSupplierIdCommand::execute() {
    catalog->updateSupplierId(productId, newSupplierId);
}
