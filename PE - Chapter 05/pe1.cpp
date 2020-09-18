#include <iostream>

using namespace std;

int main()
{
  int start, end;
  cout << "Enter the starting number: ";
  cin >> start;
  cout << "Enter the ending number: ";
  cin >> end;

  int i,sum = 0;
  for(i = start; i <= end; ++i)
    sum += i;

  cout << "The sum of all the numbers between"
       << start << " and "
       << end << "is" << sum <<".\n";

  return 0;
}
