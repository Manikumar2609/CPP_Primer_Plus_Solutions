#include <iostream>
using namespace std;

const int operation = 4;

//function prototypes
double calculate(const double x,const double y,double (*ptr)(const double,const double));
double add(const double x,const double y);
double subtract(const double x,const double y);
double multiply(const double x,const double y);
double divide(const double x,const double y);

int main()
{
  double x_Input, y_Input;
  cout << "Enter a pair of x and y: ";
  while(cin >> x_Input >> y_Input) {

    double (*ptr_Fun[operation])(const double,const double) = {
          add, subtract, multiply, divide };

    for(int i = 0; i < operation; i++)
    {
      if(i == 0)
        cout << "calculate(x, y, add): ";
      else if(i == 1)
        cout << "calculate(x, y, subtract): ";
      else if(i == 2)
        cout << "calculate(x, y, multiply): ";
      else
        cout << "calculate(x, y, divide): ";

      cout << calculate(x_Input, y_Input, ptr_Fun[i]) <<endl;
    }
    cout << "-----------------------------" << endl;
    cout << "Enter another pair of x and y: ";
    
    }
    return 0;

}
double calculate(const double x, const double y,
       double (*ptr)(const double, const double)){

     return ptr(x,y);
}

double add(const double x, const double y)
{
  return x + y;
}
double subtract(const double x, const double y)
{
  return x - y;
}
double multiply(const double x, const double y)
{
  return x * y;
}
double divide(const double x, const double y)
{
  return x / y;
}
