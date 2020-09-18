#include <iostream>
#include <string>

using namespace std;
int main() {
    struct Pizza {
		string name;
		double diameter;
		double weight;
	};

	Pizza One_Pizza;
	cout << "Please create a pizza:\n";
	cout << "Enter the name of the pizza: ";
	getline(cin, One_Pizza.name);
	cout << "Enter the diameter of the pizza (inch): ";
	cin >> One_Pizza.diameter;
	cout << "Enter the weight of the pizza (pound): ";
	cin >> One_Pizza.weight;

	cout << "The pizza's name is " << One_Pizza.name
         << ". Its diameter is " << One_Pizza.diameter << " inches and weight is "
         << One_Pizza.weight << " pounds." << endl;

    return 0;
}
