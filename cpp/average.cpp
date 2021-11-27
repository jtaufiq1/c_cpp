#include <iostream>
#include <string>
#include <cctype>
#include <locale>

using std::cout;
using std::cin;
using std::string;
using std::endl;

// Average Class 
class Average {
	public:
		// c'tor
		Average(string s);
		// d'tor
		~Average();
	private:
	// visible to Average Class Only	
};


// Find Average of two Numbers
// Using Constructor
Average::Average(string s){

	double sum = 0, input, ave;
	int counter;

	cout << endl << s << endl;
	std::cout <<"Find Average\nInput Numbers: ";

	while(cin >> input){
		if(input == '.')
			break;
		sum += input;
		counter++;
	}
	
	ave = sum / counter;
	printf("Sum: %.2f \tCounter: %d\t Average: %.2f \n", sum, counter, ave);
}

// Destructor 
Average::~Average(){

	std::cout <<"\t\t\tEnd" << endl;
}

int main(){

	string wlc = "\n\t\t\tWelcome\n";
	Average obj(wlc);
	obj;

	return 0;
}
