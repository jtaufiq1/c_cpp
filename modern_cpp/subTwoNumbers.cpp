#include <iostream>

using namespace std;

// Substraction two Numbers

int subtract(int& a, int& b){
	int r = 0;

	r = (a - b);
	return r;
}

int main(){

	// Using subtract function in Main
	printf("\t\tProgram to Subtract 2 Numbers\n");

	// Get Numbers
	int a, b; 
	printf("Enter 2 Numbers: ");
	cin >> a >> b;

	// Calling subtract function
	int remainder = subtract(a, b);

	// Output Result 
	printf("%d - %d = %d\n", a, b, remainder);

	return 0;
}
