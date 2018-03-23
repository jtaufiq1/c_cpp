#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::cerr;
using std::cin;
using std::string;
using std::ifstream;
using std::endl;

int main(int argc, char* argv[]){
	
	int count = 0;
	int sum = 0;
	int input, average;


	// cout <<"Enter fileName: ";
	string fileName;
	fileName = argv[1];

	ifstream fin;
	fin.open(fileName.c_str());

	if(!fin){

		cerr <<"Failed to open "
		     << fileName << endl;
		return 1;

		}
	else {
		while(fin >> input)
		{
			if(!fin)
				return 0;
			sum += input;
			++count;
		}
	fin.close();
	}

	// Compute average from file
	try {
		average = sum / count;
	} catch(const char* msg) {

		cerr << "No Number found!\n";	
	}

	cout <<"\nAverage of: "
       		<< sum
		<<"/"
		<< count
		<< " = "
		<< average << endl;

	return 0;
}
