#include <iostream>
#include <string>

using namespace std;

int main() {
    struct Pizza {
		string name;
		double diameter;
		double weight;
	};

	Pizza* ptrOnePizza = new Pizza;
	cout << "Please create a pizza:\n";
	cout << "Enter the name of the pizza: ";
	getline(cin, (*ptrOnePizza).name);
	cout << "Enter the diameter of the pizza (inch): ";
	cin >> (*ptrOnePizza).diameter;
	cout << "Enter the weight of the pizza (pound): ";
	cin >> (*ptrOnePizza).weight;

	cout << "The pizza's name is " << (*ptrOnePizza).name
         << ". Its diameter is " << (*ptrOnePizza).diameter << " inches and weight is "
         << (*ptrOnePizza).weight << " pounds." << endl;
	delete ptrOnePizza;

    return 0;
}
