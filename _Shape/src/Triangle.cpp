#include "../lib/Triangle.hpp"


// Constructors
Triangle::Triangle(string _name) {(this)->name = _name;}
Triangle::Triangle(string _name, double _a, double _b, double _c){
    (this)->name = _name;
    (this)->a = _a;
    (this)->b = _b;
    (this)->c = _c;
}

// Methods
// Getters
const double& Triangle::getA() const  { return (this)->a;}
const double& Triangle::getB() const  { return (this)->b;}
const double& Triangle::getC() const  { return (this)->c;}
const string& Triangle::getName() const  { return (this)->name;}

// Setters
void Triangle::setA(double _a) {(this)->a = _a;}
void Triangle::setB(double _b) {(this)->b = _b;}
void Triangle::setC(double _c) {(this)->c = _c;}
void Triangle::setName(string _name){(this)->name = _name;}

// https://stackoverflow.com/questions/51615363/how-to-write-c-getters-and-setters

// Helpers
void Triangle::printInfos() {
    cout << " ----------------------------------------------- " << '\n';
    cout << "The name of my Triangle is: "              << (this)->getName()    << '\n';
    cout << "The first side a of my Triangle is: "      << (this)->getA()       << '\n';
    cout << "The second side b of my Triangle is: "     << (this)->getB()       << '\n';
    cout << "The third side c of my Triangle is: "      << (this)->getC()       << '\n';
}
