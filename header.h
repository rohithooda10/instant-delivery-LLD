#pragma once
#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
using namespace std;

// Requirements
// view catalog - products, prices etc
// order products of some type and quantity
// payment for order - paypal or card
// assign delivery agent
// deliver order
// notification

// Classes
// user
// address, location
// CART?
// enum for order status
// delivery agent
// product
// inventory - list of products
// payment service
// order - userid, orderid, products, total cost
// order service - updates, order status, update inventory, find agent, payment

// API flow
// list products
// order products 
// check inventory
// payment
// find agent
// notify and deliver
