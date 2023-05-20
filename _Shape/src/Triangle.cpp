#include "../lib/Triangle.hpp"
#include <cmath>

// Constructors
Triangle::Triangle(const std::string& _name) : Shape(_name) {}

Triangle::Triangle(const std::string& _name, double _a, double _b, double _c) : Shape(_name), a(_a), b(_b), c(_c) {}

// Getters
const double& Triangle::getA() const {
    return a;
}

const double& Triangle::getB() const {
    return b;
}

const double& Triangle::getC() const {
    return c;
}

const std::string& Triangle::getName() const {
    return name;
}

// Setters
void Triangle::setA(double _a) {
    a = _a;
}

void Triangle::setB(double _b) {
    b = _b;
}

void Triangle::setC(double _c) {
    c = _c;
}

void Triangle::setName(const std::string& _name) {
    name = _name;
}

// Methods
double Triangle::calculateArea() const {
    double s = (a + b + c) / 2;
    return std::sqrt(s * (s - a) * (s - b) * (s - c));
}

double Triangle::calculatePerimeter() const {
    return a + b + c;
}

// Helpers
void Triangle::printInfos() const {
    std::cout << "Triangle Name: " << name << std::endl;
    std::cout << "Side Lengths: " << a << ", " << b << ", " << c << std::endl;
    std::cout << "Area: " << calculateArea() << std::endl;
    std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
}
