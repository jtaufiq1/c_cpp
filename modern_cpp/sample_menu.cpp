#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	// Simple menu using do ... while loop
	//
	char selection {};
	do {
		// Menu items
		cout << "\n1. m1\n";
		cout << "2. m2\n";
		cout << "3. m3\n";
		cout << "q. quit\n";

		cout << "Choose: ";
		cin >> selection;

		// Action
		switch(selection) {
			case '1':
				cout << "Code 1 selected\n";
				break;
			case '2':
				cout << "Code 2 selected\n";
				break;
			case '3':
				cout << "Code 3 Selected\n";
				break;
			case 'q':
				cout << "Exiting ....\n";
				break;
			default: 
				cout << "Invalid Option --- Try again ...\n";
		}
	} while(selection != 'q' && selection != 'Q');

	return 0;

}
