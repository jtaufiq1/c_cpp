#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]){

	// Get user name
	cout <<"Please enter your first name: ";
	string name;
	getline(cin, name);

	string greeting = "Hi, " + name + "!";
	string spaces(greeting.size(), ' ');
	string second = "* " + spaces + " *";
	string first(second.size(), '*');

	cout << first << endl
		<< second << endl
		<<"* " << greeting << " *" << endl 
		<< second << endl
		<< first << endl;

	return 0;
}
