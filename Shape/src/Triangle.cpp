/*
  Open a command prompt
  Type in:
  $ g++ -std=c++11 -o t src/Triangle.cpp && ./t
    if you are in parent directory (Shape)
  $ g++ -std=c++11 -o t Triangle.cpp && ./t
    if you are in src directory (Shape/src)
*/

#include <iostream>
using namespace std;

class Triangle {
    // Members
    private:
    double a,b,c;
    string name;

    // Constructors
    public:
    Triangle(string _name) {(this)->name = _name;}
    Triangle(string _name, double _a, double _b, double _c){
        (this)->name = _name;
        (this)->a = _a;
        (this)->b = _b;
        (this)->c = _c;
    }

    // Methods
    // Getters
    double getA() { return (this)->a;}
    double getB() { return (this)->b;}
    double getC() { return (this)->c;}
    string getName() { return (this)->name;}

    // Setters
    void setA(double _a) {(this)->a = _a;}
    void setB(double _b) {(this)->b = _b;}
    void setC(double _c) {(this)->c = _c;}
    void setName(string _name){(this)->name = _name;}

    // Helpers
    void printInfos() {
        cout << " ----------------------------------------------- " << '\n';
        cout << "The name of my Triangle is: "              << (this)->getName()    << '\n';
        cout << "The first side a of my Triangle is: "      << (this)->getA()       << '\n';
        cout << "The second side b of my Triangle is: "     << (this)->getB()       << '\n';
        cout << "The third side c of my Triangle is: "      << (this)->getC()       << '\n';
    }
};

int main()
{
    Triangle t("myTriangle");
    t.printInfos();
    t.setA(8.5);
    t.setB(6.5);
    t.setC(2.5);
    t.printInfos();

    /*
    // The lines above may be replaced by this:
        Triangle* t = new Triangle("myTriangle");
        t->printInfos();
        t->setA(8.5);
        t->setB(6.5);
        t->setC(2.5);
        t->printInfos();
        delete t;
    */
    return 0;
}
