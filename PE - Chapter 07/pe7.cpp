#include <iostream>
const int Max = 5;
// function prototypes
double* fill_array(double* begin,double* end);
void show_array(const double*begin, const double* end);
void revalue(double r, double* begin, double* end);

int main()
{
  using namespace std;

  double properties[Max];
  double* size = fill_array(properties, properties + Max);
  show_array(properties, size);
  if (size > 0)
  {
    cout << "Enter revaluation factor: ";
    double factor;
    while (!(cin >> factor))// bad input
    {
      cin.clear();
      while (cin.get() != '\n')
      continue;
      cout << "Bad input; Please enter a number: ";
    }
    revalue(factor, properties, size);
    show_array(properties, size);
  }
  cout << "Done.\n";
  cin.get();

  return 0;
}
double* fill_array(double* begin, double* end)
{
  using namespace std;
  double* temp_ptr;
  int cnt;
  double temp;
  for(temp_ptr = begin; temp_ptr != end; ++temp_ptr)
    {
      cout << "Enter value #" << cnt << ": ";
      cin >> temp;
      if(!cin)// bad input
        {
          cin.clear();
          while(cin.get() != '\n')
          continue;
          cout << "Bad input; input process terminated.\n";
          break;
        }
        else if(temp < 0){// signal to terminate
        break;
      }

        *temp_ptr = temp;
        ++cnt;
    }
    return temp_ptr;
}
// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double* begin, const double* end)
{
  using namespace std;
  int cnt = 1;
  for(const double* temp_ptr = begin; temp_ptr != end; ++temp_ptr)
  {
    cout << "Property #" << cnt << ": $";
    cout << *temp_ptr << endl;
    ++cnt;
  }
}
// multiplies each element of ar[] by r
void revalue(double r, double* begin, double* end)
{
  for(double* temp_ptr = begin; temp_ptr != end; ++temp_ptr)
    *temp_ptr *= r;
}
