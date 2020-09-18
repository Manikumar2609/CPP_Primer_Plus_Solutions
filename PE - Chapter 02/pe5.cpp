//Write a program that has main() call a user-defined function
//that takes a Celsius temperature value as an argument and
//then returns the equivalent Fahrenheit value.
//The program should request the Celsius value as input from
//the user and display the result, as shown in the following code:

#include <iostream>
using namespace std;
//function prototype
double Celsius_To_Fahrenheit(double celsius)
int main(){
  double celsius;
  cout << "Enter a Celsius value: ";
  cin >> celsius;
  cout << celsius << " degree Celsius is "
       << Celsius_To_Fahrenheit(celsius)
       <<"degrees Fahrenheit.\n";

  return 0;
}
