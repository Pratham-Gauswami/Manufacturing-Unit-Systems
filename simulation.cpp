// Simulation.cpp
#include "simulation.h"

void Simulation::addComponent(const Component& component) {
    components.push_back(component);
}

void Simulation::run() {
    isRunning = true;
    // Simulation logic here
}

void Simulation::stop() {
    isRunning = false;
}