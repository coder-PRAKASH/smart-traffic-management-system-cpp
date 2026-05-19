#include <iostream>
#include "../include/Vehicle.h"
#include "../include/TrafficSignal.h"
#include "../include/TrafficController.h"

using namespace std;

int main() {

    TrafficSignal signal(30, 20);
    signal.displaySignal();

    TrafficController controller;

    Vehicle car("Car", 0);
    Vehicle bus("Bus", 0);
    Vehicle ambulance("Ambulance", 1);

    controller.addVehicle(car);
    controller.addVehicle(bus);
    controller.addVehicle(ambulance);

    controller.processTraffic();

    return 0;
}