// Component.h
#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component {
public:
    Component(const std::string& name, const std::string& type);
    std::string getName() const;
    std::string getType() const;
    void setPosition(double x, double y);
    void setStatus(const std::string& status);

private:
    std::string name;
    std::string type;
    double posX, posY;
    std::string status;
};

#endif // COMPONENT_H