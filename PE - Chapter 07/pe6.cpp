#include <iostream>

using std::cout;
using std::cin;
using std::endl;

const int Array_Size = 5;
int Fill_array(double arr[], int size);
void Show_array(const double arr[], int size);
void Reverse_array(double arr[], int size);
int main()
{
   double arr[Array_Size];

   //Fill_array
   int test_Array_Size = Fill_array(arr,Array_Size);
   cout << "The size of the input array is " << test_Array_Size << ".\n";

   //show the Array
   Show_array(arr,test_Array_Size);

   //Reverse_array
   Reverse_array(arr,test_Array_Size);

  //Show_array
  cout << "After reversing the array: "<<endl;
  Show_array(arr,test_Array_Size);

  //Reverse all but the first and last element of the Array
  Reverse_array(arr + 1, test_Array_Size - 2);

  //Show_array
  cout << "After reversing all but the first and"
        <<  "last element of the array:\n";
  Show_array(arr,test_Array_Size);

  return 0;
}

int Fill_array(double arr[], int size)
{
  int i;
  double temp;
  for(i = 0; i < size; i++)
  {

    cout << "Enter value #" << i + 1 << ":";
    cin >> temp;
    if(!cin) // bad input
    {
      cin.clear();
      while(cin.get() != '\n')
        continue;

      cout << "Bad input; input process terminated.\n";
      break;
    }
    else if(temp < 0) //signal to terminate
      break;

    arr[i] = temp;
  }
  return i;
}
void Show_array(const double arr[], int size)
{
  int i;
  cout << "The array is ";
  for(i = 0; i < size; i++)
    cout << arr[i] << ", ";
  cout <<  endl;
}
void Reverse_array(double arr[],int size)
{
  for(int i = 0, j = size - 1; i < j; i++,j--)
  {
    double temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
  }
}
