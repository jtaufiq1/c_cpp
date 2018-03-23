#include <iostream>

using namespace std;

// Multiply Two Number

int multiply(int& a, int& b){
	
	int mult; 
	
	mult = a * b;

	return mult;
}

int main(){
	
	// Multiply Two Numbers 
	int a, b, m;
	
	printf("\t\tProgram to Multipy 2 Numbers\n");

	// Get Numbers
	printf("Enter 2 Numbers: ");
	cin >> a >> b;
	
	// Calling Mult function
	m = multiply(a, b);

	// Print results
	printf("%d * %d = %d \n", a, b, m);

	return 0;
}
