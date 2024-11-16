#include "header.h"
#include "orderManager.h"
#include "user.h"

int main()
{
    User* user = new User(1, "Rohit", new Location(10, 20));
    DeliveryAgent* agent = new DeliveryAgent(9, new Location(10, 20));
    Product* item1 = new Product(21, 100.0);
    Product* item2 = new Product(25, 120.0);

    InventoryService* inventoryService = new InventoryService();
    PaymentService* paymentService = new PaymentService();
    OrderManager* orderManager = new OrderManager(inventoryService, paymentService);
    orderManager->addDeliveryAgent(agent);

    inventoryService->addProduct(item1, 2);
    inventoryService->addProduct(item2, 5);

    Cart* cart = user->getCart();
    cart->addProduct(item1, 1);
    cart->addProduct(item2, 3);
    user->updateCart(cart);
    Order* order = new Order(user, user->getCart());
    orderManager->requestOrder(order);
    return 0;
}