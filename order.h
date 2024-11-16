#pragma once
#include "header.h"
#include "product.h"
#include "cart.h"
#include "user.h"
#include "deliveryAgent.h"

enum OrderStatus {
    CONFIRMED,
    INTRANSIT,
    DELIVERED,
    REJECTED
};

class Order {
    int oid;
    User* user;
    vector<pair<Product*, int> > products; // (product, quantity)
    double totalAmount;
    OrderStatus status;
    DeliveryAgent* deliveryAgent;
public:
    Order(User* user, Cart* cart);
    double getOrderCost();
    vector<pair<Product*, int> > getOrderItems();
    OrderStatus getStatus();
    void setStatus(OrderStatus status);
    DeliveryAgent* getDeliveryAgent();
    void setDeliveryAgent(DeliveryAgent* agent);
    void printStatus();
    User* getUser();
};