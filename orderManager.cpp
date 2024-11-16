#include "orderManager.h"
OrderManager* OrderManager::instance = NULL;
mutex OrderManager::mutex;
void OrderManager::setConfig(InventoryService* inventoryService, PaymentService* paymentService)
{
    this->inventoryService = inventoryService;
    this->paymentService = paymentService;
}
OrderManager* OrderManager::getInstance()
{
    lock_guard<std::mutex> lock(mutex); 
    if(instance == NULL)
        instance = new OrderManager();
    return instance;
}
void OrderManager::addDeliveryAgent(DeliveryAgent* agent)
{
    this->deliveryAgents.push_back(agent);
}

void OrderManager::requestOrder(Order* order)
{
    vector<pair<Product*, int> > orderItems = order->getOrderItems();
    for(auto &item: orderItems)
    {
        bool available = inventoryService->checkInventory(item.first, item.second);
        if(!available) 
        {
            this->setOrderStatus(order, REJECTED);
            order->printStatus();
            return;
        } 
        this->inventoryService->removeProduct(item.first, item.second);
    }
    this->setOrderStatus(order, CONFIRMED);
    this->processPayment(order);
    order->printStatus();
    this->assignDeliveryAgent(order);
    this->setOrderStatus(order, INTRANSIT);
    order->printStatus();
}
void OrderManager::assignDeliveryAgent(Order* order)
{
    order->setDeliveryAgent(this->findDeliveryAgent(order->getUser()));
}

DeliveryAgent* OrderManager::findDeliveryAgent(User* user)
{
    // can put logic to find closest devliery agent based on user and agent's location
    return this->deliveryAgents[0];
}

void OrderManager::processPayment(Order* order)
{
    this->paymentService->processPayment(order);
}

void OrderManager::setOrderStatus(Order* order, OrderStatus status)
{
    order->setStatus(status);
}