#include "../lib/Circle.hpp"
#define _USE_MATH_DEFINES
#include <cmath>

// Constructors
Circle::Circle(const std::string& _name) : Shape(_name) {}

Circle::Circle(const std::string& _name, double _r) : Shape(_name), r(_r) {}

// Getters
const double& Circle::getR() const {
    return r;
}

const std::string& Circle::getName() const {
    return name;
}

// Setters
void Circle::setR(double _r) {
    r = _r;
}

void Circle::setName(const std::string& _name) {
    name = _name;
}

// Methods
double Circle::calculatePerimeter() const {
    return 2 * M_PI * r;
}

double Circle::calculateArea() const {
    return M_PI * r * r;
}

// Helpers
void Circle::printInfos() const {
    std::cout << "Circle Name: " << name << std::endl;
    std::cout << "Radius: " << r << std::endl;
    std::cout << "Area: " << calculateArea() << std::endl;
    std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
}
