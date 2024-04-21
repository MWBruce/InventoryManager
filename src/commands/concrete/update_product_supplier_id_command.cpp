#include "../../includes/commands/concrete/update_product_supplier_id_command.h"
#include "../../includes/commands/command_response.h"

UpdateProductSupplierIdCommand::UpdateProductSupplierIdCommand(Catalog* catalog, const UpdateProductSupplierIdQuery& query)
    : catalog(catalog), productId(query.getProductId()), newSupplierId(query.getNewSupplierId()) {}


CommandResponse UpdateProductSupplierIdCommand::execute() {
    catalog->updateSupplierId(productId, newSupplierId);
    return CommandResponse(true, "Product description updated successfully.");
}
