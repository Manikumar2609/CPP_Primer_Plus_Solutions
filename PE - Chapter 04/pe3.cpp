#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;

int main() {
    const int ArrSize = 20;
	  char firstName[ArrSize], lastName[ArrSize];

	  cout << "Enter your first name: ";
	  cin.getline(firstName, ArrSize);

    cout << "Enter your last name: ";
	  cin.getline(lastName, ArrSize);

	  char fullname[ArrSize + ArrSize] = {'\0'};

	  strcat(strcat(strcat(fullname, firstName), ", "), lastName);
	  cout << "Here's the information in a single string: " << fullname << endl;

    return 0;
}
