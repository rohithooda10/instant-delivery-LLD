#include "location.h"

Location::Location(int latitude, int longitude)
{
    this->latitude = latitude;
    this->longitude = longitude;
}
double Location::getDistance(Location* loc)
{
    return abs((this->latitude - loc->latitude) + (this->longitude - loc->longitude));
}