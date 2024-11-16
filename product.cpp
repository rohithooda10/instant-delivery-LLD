#include "product.h"

Product::Product(int pid, double price)
{
    this->pid = pid;
    this->price = price;
}
int Product::getPid(){
    return this->pid;
}
double Product::getPrice()
{
    return this->price;
}