#include <iostream>
#include "../include/TrafficSignal.h"

using namespace std;

TrafficSignal::TrafficSignal(int g, int r) {
    greenTime = g;
    redTime = r;
}

void TrafficSignal::displaySignal() {
    cout << "Green Time: " << greenTime << " seconds" << endl;
    cout << "Red Time: " << redTime << " seconds" << endl;
}