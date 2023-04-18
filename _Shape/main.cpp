/*
  Open a command prompt
  Type in:
  $ g++ -std=c++11 -o m src/*.cpp && ./m
*/

#include "lib/Circle.hpp"
#include "lib/Square.hpp"
#include "lib/Triangle.hpp"

int main()
{
    Circle c("My Circle");
    c.printInfos();
    c.setR(8.5);
    c.printInfos();

    /*
    // The lines above may be replaced by this:
        Circle* c = new Circle("My Circle");
        c->printInfos();
        c->setR(8.5);
        c->printInfos();
        delete c;
    */

    Square s("My Square");
    s.printInfos();
    s.setL(10.01);
    s.printInfos();

    /*
    // The lines above may be expressed as this:
        Square* s = new Square("My Square");
        s->printInfos();
        s->setL(10.01);
        s->printInfos();
        delete s;
    */


    Triangle t("My Triangle");
    t.printInfos();
    t.setA(8.5);
    t.setB(9.5);
    t.setC(10.5);
    t.printInfos();

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
