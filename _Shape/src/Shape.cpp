// Shape.cpp file
#include <iostream>
#include "../lib/Shape.hpp"

// Constructors
Shape::Shape() {}
Shape::Shape(const std::string& _name) : name(_name) {}

// Getters
const std::string& Shape::getName() const {
    return name;
}

// Setters
void Shape::setName(const std::string& _name) {
    name = _name;
}
