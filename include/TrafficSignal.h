#ifndef TRAFFICSIGNAL_H
#define TRAFFICSIGNAL_H

class TrafficSignal {
public:
    int greenTime;
    int redTime;

    TrafficSignal(int g, int r);

    void displaySignal();
};

#endif