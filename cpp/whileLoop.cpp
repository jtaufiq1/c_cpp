#include <iostream>

using namespace std;

int main(int argc, char* argv[]){

	int input, sum = 0, counter = 0;
	double average;

	while(true){
		
//		!cin.eof() // use cin.clear() to clear bad state
		cin >> input;

		if(!cin)
			break;
		sum += input;
		counter++;
	}

	average = sum / counter;
	cout << endl
		<<"Average: "
		<< sum <<" / "
		<< counter <<" = "
		<< average
		<< endl;

	return 0;
}
