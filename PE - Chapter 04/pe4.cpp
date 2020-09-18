#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName, lastName;

	cout << "Enter your first name: ";
	getline(cin, firstName);
	cout << "Enter your last name: ";
	getline(cin, lastName);
	cout << "Here's the information in a single string: "
         << firstName + ", " + lastName << endl;

    return 0;
}
