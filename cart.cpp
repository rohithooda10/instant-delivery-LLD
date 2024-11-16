#include "cart.h"

void Cart::addProduct(Product* product, int quantity)
{
    if(this->products.size() == 0)
        this->products = vector<pair<Product*, int> >();
    this->products.push_back(pair<Product*, int>(product, quantity));
}
vector<pair<Product*, int> > Cart::getCart()
{
    return this->products;
}