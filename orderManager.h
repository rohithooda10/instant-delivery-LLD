#pragma once
#include "header.h"
#include "inventoryService.h"
#include "paymentService.h"

class OrderManager {
    InventoryService* inventoryService;
    PaymentService* paymentService;
    vector<DeliveryAgent*> deliveryAgents;
    static OrderManager* instance;
    static mutex mutex;
public:
    void setConfig(InventoryService* inventoryService, PaymentService* paymentService);
    OrderManager* getInstance();
    void requestOrder(Order* order);
    void addDeliveryAgent(DeliveryAgent* agent);
    void assignDeliveryAgent(Order* order);
    DeliveryAgent* findDeliveryAgent(User* user);
    void processPayment(Order* order);
    void setOrderStatus(Order* order, OrderStatus status);
};