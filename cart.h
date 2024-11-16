#pragma once
#include "header.h"
#include "product.h"

class Cart {
    vector<pair<Product*, int> > products;
public:
    void addProduct(Product* product, int quantity);
    vector<pair<Product*, int> > getCart();
};