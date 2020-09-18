//Write a c++ program that asks for a distance in furlongs
//and converts it to yards.(one furlong is 220 yards)
#include <iostream>

int main(){
  using std::cin;
  using std::cout;

  double furlongs;
  cout << "Enter a distance in furlongs: ";
  cin >> furlongs;
  cout << "It's equivalent to " << furlongs * 220 << "yards.\n";

  return 0;
}
