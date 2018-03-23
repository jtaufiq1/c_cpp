#include <iostream>

// Square of a Number 

double sqr(){

	double i;

	std::cout << "Number to square: ";
	std::cin >> i;	
	
	return i*i;
}


int main(){

	double r = sqr();

	std::cout << r <<"\n";
	return 0;
}
