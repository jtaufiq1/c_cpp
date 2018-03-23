#include <iostream>

using namespace std;

#define ERROR "error"

// Divide Two Numbers

double divide(double& a, double& b){

	double r;

	if(b == 0){
		cout << ERROR << endl;
	//	return (char)re;
	}
	else {

	r = (a / b);
	return r;
	}
}


int main(){

	// Divide Two Numbers in Main
	printf("\t\tProgram to Divide Two Numbers\n");
	
	// Get Input
	double a, b;
	cout << "Input 2 Numbers\n";
	cin >> a >> b;

	// Calling divide() function
	double re = divide(a, b);

	// print result
	if(!(re)  && !(re == 0)){
		cout << ERROR << endl;
	}
	else {
		printf("%.2f / %.2f = %.2f \n", a, b, re);
	}

	return 0;
}
