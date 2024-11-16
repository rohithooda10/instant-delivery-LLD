#include "order.h"

Order::Order(User* user, Cart* cart)
{
    this->user = user;
    this->products = cart->getCart();
    for(auto &product: this->products)
    {
        totalAmount += (product.first->getPrice() * product.second);
    }
}
double Order::getOrderCost()
{
    return totalAmount;
}
vector<pair<Product*, int> > Order::getOrderItems()
{
    return this->products;
}

void Order::printStatus()
{
    if(this->status == CONFIRMED) cout<<"CONFIRMED"<<endl;
    if(this->status == INTRANSIT) cout<<"INTRANSIT"<<endl;
    if(this->status == DELIVERED) cout<<"DELIVERED"<<endl;
    if(this->status == REJECTED) cout<<"REJECTED"<<endl;
}

OrderStatus Order::getStatus()
{
    return this->status;
}
void Order::setStatus(OrderStatus status)
{
    this->status = status;
}

DeliveryAgent* Order::getDeliveryAgent()
{
    return this->deliveryAgent;
}
void Order::setDeliveryAgent(DeliveryAgent* agent)
{
    this->deliveryAgent = agent;
}
User* Order::getUser()
{
    return this->user;
}