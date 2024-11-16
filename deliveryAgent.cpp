#include "deliveryAgent.h"

DeliveryAgent::DeliveryAgent(int did, Location* loc)
{
    this->did = did;
    this->location = new Location(loc->latitude, loc->longitude);
}
AgentStatus DeliveryAgent::getStatus()
{
    return this->status;
}

void DeliveryAgent::setStatus(AgentStatus status)
{
    this->status = status;
}
Location* DeliveryAgent::getLocation()
{
    return this->location;
}