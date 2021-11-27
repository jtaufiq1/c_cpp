#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

// Power of a Number

void show_help(std::string name){

	std::cerr <<"Usage: " << name
		  <<"\tbase\texponent" << std::endl;
}

void pow(){

	int base;
	int power;

	// Get Base and Power
	printf("Base: ");
	std::cin >> base;

	printf("Power: ");
	std::cin >> power;

	// Multiply Base by power 
	// Reduce Power by 1
	
	int mult = 1;
	for(int i = power; i >= 1; --i){
		mult *= base;
	//	std::cout<< mult << " ";
	}
	printf("%d^%d = %d\n", base, power, mult);
}

int main(int argc, char* argv[]){

	if( (argc < 1 || argc > 2) )
	{
		show_help(argv[0]);
		std::cout <<"\t\t\tExample\n"
			  << argv[0]
			  <<" 34 3\n 34 - base\n 3 - exponent"
			  << std::endl;
		
		return 1;
	}

	// Calling power function
	pow();

return 0;
}
