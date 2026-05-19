#ifndef TRAFFICCONTROLLER_H
#define TRAFFICCONTROLLER_H

#include <queue>
#include "Vehicle.h"

class TrafficController {
private:
    queue<Vehicle> normalLane;
    priority_queue<int> emergencyLane;

public:
    void addVehicle(Vehicle v);
    void processTraffic();
};

#endif