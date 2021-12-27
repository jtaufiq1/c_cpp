#include <iostream>
#include <string>

void print(int);
void print(long);
void print(double);
void print(std::string);

void show_help(std::string base_name);
void __example(std::string); 

int calculate_power(int, int);
double calculate_power(double, double);

/* Main Program */
int main(int argc, char* argv[]){

	if( argc != 3 )
	{
		show_help(argv[0]);
		return 1;
	}

	long base = atol(argv[1]);
	int power = atoi(argv[2]);

	print(calculate_power(base, power));

	return 0;
}

void show_help(std::string base_name) {

	std::cerr <<"Usage: " << base_name
		  <<"\tbase\texponent" << std::endl;
	__example(base_name);
}
void __example(std::string base_name) {
	std::cerr <<"\t\tExample\n"
		  << base_name 
		  <<" 34 3\n 34 - base\n 3 - exponent"
		  << std::endl;
}

void print(int p) {
	std::cout << p << std::endl;
}
void print(long p) {
	std::cout << p << std::endl;
}
void print(double p) {
	std::cout << p << std::endl;
}

int calculate_power(int base, int power) {
	int result {1};
	for(int i = power; i >= 1; --i){
		result *= base;
	}
	return result; 
}
double calculate_power(double base, double power) {
	int result {1};
	for(int i = power; i >= 1; --i){
		result *= base;
	}
	return result; 
}
