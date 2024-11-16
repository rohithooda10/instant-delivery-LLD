#pragma once
#include "header.h"
#include "order.h"

class PaymentService {
public:
    bool processPayment(Order* order);
};