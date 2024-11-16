#pragma once
#include "header.h"
#include "location.h"
#include "cart.h"

class User {
    int uid;
    string name;
    Location* address;
    Cart* cart;
public:
    User(int uid, string name, Location* address);
    int getUserID();
    Location* getUserLocation();
    Cart* getCart();
    void updateCart(Cart* cart);
};