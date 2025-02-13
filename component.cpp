// Component.cpp
#include "component.h"

Component::Component(const std::string& name, const std::string& type)
    : name(name), type(type), posX(0), posY(0), status("Idle") {}

std::string Component::getName() const {
    return name;
}

std::string Component::getType() const {
    return type;
}

void Component::setPosition(double x, double y) {
    posX = x;
    posY = y;
}

void Component::setStatus(const std::string& status) {
    this->status = status;
}