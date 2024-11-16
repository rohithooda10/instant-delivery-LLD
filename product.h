#pragma once
#include "header.h"

class Product {
    int pid;
    double price;
public:
    Product(int pid, double price);
    int getPid();
    double getPrice();
};