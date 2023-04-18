/*
  Open a command prompt
  Type in:
  $ g++ -std=c++11 -o tt testClass.cpp && ./tt
*/


#include <iostream>
#include <string> // in order to use strcpy() function

using namespace std;

class Book
{
  // We may modify the ID directly because it is a simple variable.
public:
  unsigned int ID;
  // because we have an arrays of chars that have fixed size=> STATIC ARRAY size
  // then in order to modify data members of my Book structure, I MUST USE either
  // the strcpy or the strncpy functions.
  char author[100];
  char name[200];
  char description[300];
  // Utility Functions:
  void printInfos()
  {
    // this refers to the instance of an object of type Book
    cout << "The ID of my book is : "         << (this)->ID           << '\n';
    cout << "The author of my book is: "      <<  (this)->author      <<  '\n';
    cout << "The name of my book is: "        << (this)->name         <<  '\n';
    cout << "The description of my book is: " << (this)->description  <<  '\n';
  }
  // in order to add functions inside our structure, we must use pointer to functions
  // which is somehow a little bit complicated.
};



int main()
{
  Book b;
  b.printInfos();

  (b).ID = 123;
  strcpy( (b).author, "Z. Ali");
  strcpy( (b).name, "C Programming Language");
  strcpy( (b).description, "C Programming Language Tutorial");
  b.printInfos();
  /*
    In order to avoid stack overflow, we MUST use the function strncpy
    instead of the function strcpy().
  */

  return 0;
}
