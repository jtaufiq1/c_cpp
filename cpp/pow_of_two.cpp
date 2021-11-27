#include <iostream>

int main()
{
	int base = 2;
	int pow = 1;
	for(int exp = 0; exp < 16; exp++)
	{
		std::cout << base <<" to the power " << exp <<" of " << pow << std::endl;
		pow = pow * base;
	}

	return 0;
}
