#include "../lib/Circle.hpp"
//#include <iostream>
#include <cmath>

// Constructors
Circle::Circle(const std::string& _name) : Shape(_name) {}
Circle::Circle(const std::string& _name, double _r) : Shape(_name), r(_r) {}

// Methods
// Getters
const double& Circle::getR() const {
    return r;
}

// Setters
void Circle::setR(double _r) {
    r = _r;
}

// Calculate perimeter
double Circle::calculatePerimeter() const {
    return 2 * M_PI * r;
}

// Calculate area
double Circle::calculateArea() const {
    return M_PI * r * r;
}

// Helpers
void Circle::printInfos() const {
    std::cout << "The name of my Circle is: " << name << '\n';
    std::cout << "The radius of my Circle is: " << r << '\n';
    std::cout << "Area: " << calculateArea() << std::endl;
    std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
}
