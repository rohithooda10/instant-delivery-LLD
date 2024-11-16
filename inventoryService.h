#pragma once
#include "header.h"
#include "product.h"

class InventoryService {
    map<Product*, int> inventory; // (Product, quantity)
public:
    void addProduct(Product* product, int quantity);
    bool checkInventory(Product* product, int quantity);
    void removeProduct(Product* product, int quantity);
};