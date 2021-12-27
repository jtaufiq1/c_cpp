#include <iostream>

int main()
{
	// Variables
	int max_number = -100000;
	int counter;
	int number;

	do {
		std::cin >> number;
		if(number != -1) {
			counter++;
		}
		if(number > max_number) {
			max_number = number;
		}
	} while(number != -1);
	if(counter) 
		std::cout <<"The largest number: " << max_number << std::endl;

	return 0;
}
