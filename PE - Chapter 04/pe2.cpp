#include <iostream>
#include <string>

using namespace std;

int main() {

      string name, dessert;
	    cout << "Enter your name:\n";
	    getline(cin, name);	// getline is a great function to remember for string.

      cout << "Enter your favorite dessert:\n";
	    getline(cin, dessert);

      cout << "I have some delicious " << dessert;
	    cout << " for you, " << name << ".\n";

      return 0;
}