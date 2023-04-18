#include "../lib/Circle.hpp"

// Constructors
Circle::Circle(string _name) {(this)->name = _name;}
Circle::Circle(string _name, double _r){
    (this)->name = _name;
    (this)->r = _r;
}

// Methods
// Getters
const double& Circle::getR() const  { return (this)->r;}
const string& Circle::getName() const  { return (this)->name;}

// Setters
void Circle::setR(double _r) {(this)->r = _r;}
void Circle::setName(string _name){(this)->name = _name;}

// https://stackoverflow.com/questions/51615363/how-to-write-c-getters-and-setters


// Helpers
void Circle::printInfos() {
    cout << " ----------------------------------------------- "     << '\n';
    cout << "The name of my Circle is: "    << (this)->getName()    << '\n';
    cout << "The radius of my Circle is: "  << (this)->getR()       << '\n';
}

