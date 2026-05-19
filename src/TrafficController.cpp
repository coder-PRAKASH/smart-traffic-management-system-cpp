#include <iostream>
#include "../include/TrafficController.h"

using namespace std;

void TrafficController::addVehicle(Vehicle v) {
    if (v.priority == 1) {
        emergencyLane.push(v.priority);
        cout << "Emergency vehicle added." << endl;
    } else {
        normalLane.push(v);
        cout << "Normal vehicle added." << endl;
    }
}

void TrafficController::processTraffic() {
    if (!emergencyLane.empty()) {
        cout << "Emergency vehicle passing first!" << endl;
        emergencyLane.pop();
    }

    while (!normalLane.empty()) {
        Vehicle v = normalLane.front();
        cout << "Processing vehicle: " << v.type << endl;
        normalLane.pop();
    }
}