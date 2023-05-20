#include "../lib/Square.hpp"

// Constructors
Square::Square(const std::string& _name) : Shape(_name) {}

Square::Square(const std::string& _name, double _l) : Shape(_name), l(_l) {}

// Getters
const double& Square::getL() const {
    return l;
}

const std::string& Square::getName() const {
    return name;
}

// Setters
void Square::setL(double _l) {
    l = _l;
}

void Square::setName(const std::string& _name) {
    name = _name;
}

// Methods
double Square::calculateArea() const {
    return l * l;
}

double Square::calculatePerimeter() const {
    return 4 * l;
}

// Helpers
void Square::printInfos() const {
    std::cout << "Square Name: " << name << std::endl;
    std::cout << "Side Length: " << l << std::endl;
    std::cout << "Area: " << calculateArea() << std::endl;
    std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
}
