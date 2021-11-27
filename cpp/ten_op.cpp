#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

	int num {};
	
	cout << "Enter a number: ";
	cin >> num;

	cout << num << ((num % 2 == 0) ? " is even" : " is odd") << endl;
	return 0;
}
