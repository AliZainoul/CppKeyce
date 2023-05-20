//    Open a command prompt, and type in:
//          g++ -std=c++11 -o m src/*.cpp main.cpp && ./m

//#include <iostream>
#include "lib/Shape.hpp"
#include "lib/Circle.hpp"
#include "lib/Square.hpp"
#include "lib/Triangle.hpp"

using std::cout;
using std::cin;
using std::endl;


void printLine() {
    std::cout << "------------------------------------" << "\n";
}

int main()
{

    
    Circle c("My Circle");
    printLine();
    c.setR(10.1);
    c.printInfos();
    printLine();
    /*
    // The lines above may be replaced by this:
    Circle* c = new Circle("My Circle");
    c->printInfos();
    c->setR(8.5);
    c->printInfos();
    delete c;
    */

    Square s("My Square");
    printLine();
    s.setL(10.01);
    s.printInfos();
    printLine();

    /*
    // The lines above may be expressed as this:
    Square* s = new Square("My Square");
    s->printInfos();
    s->setL(10.01);
    s->printInfos();
    delete s;
    */

    Triangle t("My Triangle");
    printLine();
    t.setA(8.5);
    t.setB(9.5);
    t.setC(10.5);
    t.printInfos();
    printLine();

    /*
    // The lines above may be expressed as this:
    Triangle* t = new Triangle("My Triangle");
    t->printInfos();
    t->setA(8.5);
    t->setB(9.5);
    t->setC(10.5);
    t->printInfos();
    delete t;
    */

    return 0;
}
