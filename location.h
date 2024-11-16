#pragma once
#include "header.h"

class Location {
public:
    int latitude;
    int longitude;
    Location(int latitude, int longitude);
    double getDistance(Location* loc);
};