#include "../../includes/commands/concrete/get_product_supplier_id_command.h"
#include "../../includes/commands/command_response.h"

GetProductSupplierIdCommand::GetProductSupplierIdCommand(Catalog* catalog, const GetProductSupplierIdQuery& query)
    : catalog(catalog), productId(query.getProductId()) {}

CommandResponse GetProductSupplierIdCommand::execute() {
    int supplierId = catalog->getProductSupplierId(productId);
    return CommandResponse(true, "Product supplier ID retrieved", supplierId);
}
