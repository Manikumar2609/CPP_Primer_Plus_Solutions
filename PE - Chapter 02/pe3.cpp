//Write a c++ program that uses three user-defined functions
//(counting main() as one ) and produces the following output:

// Three blind mice
// Three blind mice
// see how they run
// see how they run

#include <iostream>

using std::cout;
using std::endl;

void printThree();
void printsee();

int main()
{
  printThree();
  printThree();
  printSee();
  printSee();

  return 0;
}
void printThree(){
  cout << "Three blind mice " << endl;
}
void printSee(){
  cout << "See how they run " << endl;
}
