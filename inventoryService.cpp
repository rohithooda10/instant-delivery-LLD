#include "inventoryService.h"

void InventoryService::addProduct(Product* product, int quantity)
{
    this->inventory[product] += quantity;
}
bool InventoryService::checkInventory(Product* product, int quantity)
{
    if(this->inventory.find(product) == inventory.end() || this->inventory[product] < quantity)
        return false;
    return true;
}
void InventoryService::removeProduct(Product* product, int quantity)
{
    if(this->inventory.find(product) == inventory.end() || this->inventory[product] < quantity)
        return;
    this->inventory[product] -= quantity;
}