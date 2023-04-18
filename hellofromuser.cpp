/*
  Open a command prompt
  Type in:
  $ g++ -std=c++11 -o h hellofromuser.cpp && ./h
*/

// For C++
#include <iostream> // for input and outpout streams

using namespace std; // in order to use cout and cin

// cin and cout are the exact equivalent in C of scanf() and printf().

int main()
{
  string name;
  // This token "<<" is simply for giving to our stream buffer cout what it should get
  // cout prints into the screen what you give to it.
  cout << "Please enter your name: " << '\n';
  cin >> name;

  cout << "Hello " << name;

  return 0;
}
