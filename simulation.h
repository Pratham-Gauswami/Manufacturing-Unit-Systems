// Simulation.h
#ifndef SIMULATION_H
#define SIMULATION_H

#include <vector>
#include "component.h"

class Simulation {
public:
    void addComponent(const Component& component);
    void run();
    void stop();

private:
    std::vector<Component> components;
    bool isRunning = false;
};

#endif // SIMULATION_H