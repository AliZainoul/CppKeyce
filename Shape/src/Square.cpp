/*
  Open a command prompt
  Type in:
  $ g++ -std=c++11 -o s src/Square.cpp && ./s
    if you are in parent directory (Shape)
  $ g++ -std=c++11 -o s Square.cpp && ./s
    if you are in src directory (Shape/src)
*/

#include <iostream>
using namespace std;

class Square {
    // Members
    private:
    double l;
    string name;

    // Constructors
    public:
    Square(string _name) {(this)->name = _name;}
    Square(string _name, double _l){
        (this)->name = _name;
        (this)->l = _l;
    }

    // Methods
    // Getters
    double getL() { return (this)->l;}
    string getName() { return (this)->name;}

    // Setters
    void setL(double _l) {(this)->l = _l;}
    void setName(string _name){(this)->name = _name;}

    // Helpers
    void printInfos() {
        cout << " ----------------------------------------------- " << '\n';
        cout << "The name of my Square is: "    << (this)->getName()    << '\n';
        cout << "The length of my object is: "  << (this)->getL()       << '\n';
    }
};



int main()
{
    Square s("myCircle");
    s.printInfos();
    s.setL(8.5);
    s.printInfos();

    /*
    // The lines above may be expressed as this:
        Square* s = new Square("myCircle");
        s->printInfos();
        s->setL(8.5);
        s->printInfos();
        delete s;
    */
    return 0;
}
