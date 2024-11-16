#include "user.h"

User::User(int uid, string name, Location* address)
{
    this->cart = new Cart();
    this->uid = uid;
    this->name = name;
    this->address = new Location(address->latitude, address->longitude);
}
int User::getUserID()
{
    return this->uid;
}
Location* User::getUserLocation()
{
    return this->address;
}

Cart* User::getCart()
{
    return this->cart;
}

void User::updateCart(Cart* cart)
{
    this->cart = cart;
}