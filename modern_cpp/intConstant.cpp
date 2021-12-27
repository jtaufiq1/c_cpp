#include <iostream>

/*
 * Integer literals (constants)
 *
 */

using namespace std;

int main(){

	/* Positive Integers Only
	unsigned decValue (1); // Decimal Variable
	unsigned octalValue (01); // Octal Variable
	unsigned hexValue (0x1); // Hexadecimal Variable
	*/

	// Get input
	int decInput;
	printf("Please input a Number: ");
	cin >> decInput;

	/* Multiply Decimal, Octal and
	// Hexadecimal with decimal input
	decValue *= decInput;
	octalValue *= decInput;
	hexValue *= decInput;
	*/ 

	cout << "\nDecimal input: " << decInput << endl;
	
	int hex;
	for(hex = 0; hex < decInput; hex - 16){
		decInput /= 16;
		cout << hex <<endl;
	}

	return 0;
}
