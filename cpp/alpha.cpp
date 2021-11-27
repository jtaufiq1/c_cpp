#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(int argc, char* argv[]){

	int i = 1, end = 126;
	char start;	

	for(start = 0; start <= end; ++start){
		
		cout << char(start) << " ";
	}

	cout << endl;
	return 0;
}
