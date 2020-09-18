#include <iostream>

using namespace std;

double harmonic_Mean(double x, double y);

int main()
{
  double x, y;
  cout << "Enter a pair of numbers: (to stop enter a pair of 0(zero)) "<< endl;

  while(cin >> x >> y && !(x == 0 || y == 0)){
    cout << "The Harmonic_Mean is " << harmonic_Mean(x,y) << ".\n";
    cout << "Enter another pair of numbers: " << endl;
  }
  return 0;
}
double harmonic_Mean(double x, double y){

  double harmonic_mean =  2.0 * x * y / (x + y);

  return harmonic_mean;
}
