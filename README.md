# Instant Delivery App (LLD)

This repository contains a Low-Level Design (LLD) implementation for an instant delivery application. It demonstrates modular and scalable design principles using object-oriented programming. The system supports functionalities such as managing users, orders, delivery agents, inventory, and payments.

## Features

- **User Management**: Handles user accounts, profiles, and location.
- **Order Management**: Manages order placement, status updates, and tracking.
- **Delivery Agents**: Tracks delivery agent availability and assignment.
- **Cart Management**: Enables users to add, update, and remove items from their cart.
- **Inventory Management**: Ensures product availability and stock updates.
- **Location Services**: Handles geolocation for user and delivery operations.
- **Payment Processing**: Manages seamless and secure payments.

## File Overview

- **`cart.cpp`**: Manages cart operations, including adding, updating, and removing products.
- **`deliveryAgent.cpp`**: Tracks delivery agent information, availability, and assignments.
- **`inventoryService.cpp`**: Handles inventory management, including stock updates and availability checks.
- **`location.cpp`**: Provides location-related functionality, such as user addresses and delivery.
- **`main.cpp`**: Entry point for the application, coordinating the overall system workflow.
- **`order.cpp`**: Manages order-related operations such as creation, status updates, and tracking.
- **`orderManager.cpp`**: Encapsulates order management logic for better modularity.
- **`paymentService.cpp`**: Processes payments.
- **`product.cpp`**: Manages product details, pricing, and categorization.
- **`user.cpp`**: Handles user accounts, profiles, and preferences.

## How to Use

1. **Clone the Repository**
2. **Compile the Code:** Use a C++ compiler to compile the project. For example:

```bash
g++ cart.cpp deliveryAgent.cpp inventoryService.cpp location.cpp main.cpp order.cpp orderManager.cpp paymentService.cpp product.cpp user.cpp -o InstantDeliveryApp
```

3. **Run the Application:**

```bash
./InstantDeliveryApp
```

## Dependencies

C++17 or later
A C++ compiler (e.g., GCC, Clang)

## Contribution

Contributions are welcome! Feel free to open issues or submit pull requests.
