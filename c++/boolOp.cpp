#include <iostream>

using namespace std;

bool boolOp(){

	char answer = 0;
	int tries = 1;

	while(tries < 4){

	cout << "Please Do You Agree? ";
	cin >> answer;

	switch(answer){
		case 'y':
			return true;
			std::cout <<"True\n";
			break;

		case 'n':
			return false;
			std::cout <<"False\n";
			break;

		default:
			tries += 1;
	}
	}

	cout << "I will take that for NO\n";
	return false;
}

int main(){

	if(boolOp() == true){
		cout << "This execution is a success\n";
	}
	else {
		cout << "Failure in execution\n";
	}

	return 0;
}
