#include <iostream>

using namespace std;

// Bitwise Operation: bit mask
//
int main()
{
	int flag_register = 0b0;	// Set of bits 
	int mask = 0b1000;	// bit number 3, i.e 4th position

	// Bit AND: Operation on mask
	flag_register = flag_register & mask;
	cout <<flag_register << endl;

	// Bit COMPLEMENT: Unset mask bit
	flag_register = flag_register & ~mask;  
	cout <<flag_register <<endl;

	// Bit OR: Set bit 
	flag_register = flag_register | mask;
	cout <<flag_register << endl;

	// Bit XOR: negation
	flag_register = flag_register ^ mask;

	return 0;
}
