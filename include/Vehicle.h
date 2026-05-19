#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
using namespace std;

class Vehicle {
public:
    string type;
    int priority;

    Vehicle(string t, int p);
};

#endif