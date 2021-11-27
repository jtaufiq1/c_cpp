#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	enum Color { red, green, blue };
	Color col {green};

	switch(col) {
		case red: cout << "Red\n";
			 break;
		case blue: cout << "Blue\n";
			 break;
		case green: cout << "Green\n";
			 break;
		default:
			cout <<"No match found\n";
	}
	return 0;
}
