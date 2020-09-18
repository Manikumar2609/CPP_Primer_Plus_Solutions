#include <iostream>

using std::cout;
using std::cin;
using std::endl;

long double factorial(int num);

int main( )
{
  cout << "Enter a integer for its factorial: ";
  while(cin >> num){
    cout << num << "! = " << factorial(num) << endl;
    cout << "Enter another integer for get its factorial: ";
  }
  return 0;
}
long double factorial(int num)
{
  if(num == 0)
    return 1;

  return num * factorial(num - 1);  
}
