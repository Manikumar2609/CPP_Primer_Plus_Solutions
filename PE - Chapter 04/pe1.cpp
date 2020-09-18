#include <iostream>

using namespace std;

const int Array_Size = 20;

int main()
{
  char first_name[Array_Size],last_name[Array_Size];
  char letter;
  int age;

  cout << "What is your first name? ";
  cin.getline(first_name,Array_Size).get();

  cout << "What is your last name? ";
  cin.getline(last_name,Array_Size).get();

  cout << "What letter grade do you deserve? (A or B or C) ";
  cin >> letter;

  cout << "What is your age? ";
  cin >> age;

  cout << "Name: " << last_name << "," << first_name << endl;
  cout << "Grade: " << char(letter + 1) << endl;
  cout << "Age: " << age << endl;

  return 0;
}
