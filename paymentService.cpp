#include "paymentService.h"

bool PaymentService::processPayment(Order* order)
{
    cout<<order->getUser()->getUserID()<<" user, paid amount: "<<order->getOrderCost()<<endl;
    return true;
}