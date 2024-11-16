#pragma once
#include "header.h"
#include "location.h"

enum AgentStatus {
    AVAILABLE,
    UNAVAILABLE
};

class DeliveryAgent {
    int did;
    Location* location;
    AgentStatus status;
public:
    DeliveryAgent(int did, Location* loc);
    AgentStatus getStatus();
    void setStatus(AgentStatus status);
    Location* getLocation();
};