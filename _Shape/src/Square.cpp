#include "../lib/Square.hpp"


// Constructors
Square::Square(string _name) {(this)->name = _name;}
Square::Square(string _name, double _l){
    (this)->name = _name;
    (this)->l = _l;
}

// Methods
// Getters
const double& Square::getL() const  { return (this)->l;}
const string& Square::getName() const  { return (this)->name;}

// Setters
void Square::setL(double _l) {(this)->l = _l;}
void Square::setName(string _name){(this)->name = _name;}

// https://stackoverflow.com/questions/51615363/how-to-write-c-getters-and-setters

// Helpers
void Square::printInfos() {
    cout << " ----------------------------------------------- " << '\n';
    cout << "The name of my Square is: "    << (this)->getName()    << '\n';
    cout << "The length of my object is: "  << (this)->getL()       << '\n';
}