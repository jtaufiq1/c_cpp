#include <iostream>

using namespace std;

/* This program takes of two integers
 *
 * and add them
 *
 * Display the sum of the two numbers.
 */

int sum(int& a, int& b){
	int Add (0);

	Add = a + b;
	return Add;
}

int main(){

	int a, b;
	// variables to hold the values to add 

	printf("\t\tProgram to add Two Numbers\n");

	cout << "Input 2 Numbers: ";
	cin >> a >> b;  // Get a and b
	
	// Calling sum function 
	int total = sum(a, b);

	printf("Calculating ...\n \tSum of %d and %d = %d\n", a, b, total);
	return 0;
}
