/*
  Open a command prompt
  Type in:
  $ g++ -std=c++11 -o c src/Circle.cpp && ./c
    if you are in parent directory (Shape)
  $ g++ -std=c++11 -o c Circle.cpp && ./c
    if you are in src directory (Shape/src)
*/

#include <iostream>
using namespace std;

class Circle {
    // Members
    private:
    double r;
    string name;

    // Constructors
    public:
    Circle(string _name) {(this)->name = _name;}
    Circle(string _name, double _r){
        (this)->name = _name;
        (this)->r = _r;
    }

    // Methods
    // Getters
    double getR() { return (this)->r;}
    string getName() { return (this)->name;}

    // Setters
    void setR(double _r) {(this)->r = _r;}
    void setName(string _name){(this)->name = _name;}

    // Helpers
    void printInfos() {
        cout << " ----------------------------------------------- "     << '\n';
        cout << "The name of my Circle is: "    << (this)->getName()    << '\n';
        cout << "The radius of my Circle is: "  << (this)->getR()       << '\n';
    }
};

int main()
{
    Circle c("mys");
    c.printInfos();
    c.setR(8.5);
    c.printInfos();

    /*
    // The lines above may be replaced by this:
        Circle* c = new Circle("mys");
        c->printInfos();
        c->setR(8.5);
        c->printInfos();
        delete c;
    */
    return 0;
}
