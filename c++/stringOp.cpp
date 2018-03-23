// String Class provides functions to operate of Strings in C++

#include <iostream>
#include <string>

using namespace std;
#define D 100

struct person {
	char *fullName[D];
	unsigned short int age;
//	string *hobby[D];
}; 

// Show New person Info
void showPerson(person &name);

int main() {

	// New person
	person Gh;

	// Get fullName 
	char *fullName[D];
	fullName = new char[D];
	int age;

	printf("FullName: ");
	for(int i = 0; i < D; i++){
		if('\0')
			cout << " ";
		cin >> fullName;
	}
	Gh.fullName = fullName[D];

	do {
		cout << endl << "Age: ";
		cin >> age;
	} while(age < 0);

	Gh.age = age;

	// print to Standard Output
	cout <<"Your FullName is " << Gh.fullName << endl;
	cout <<"Age: " << Gh.age << endl;

	delete [] *fullName;
	return 0;
}
