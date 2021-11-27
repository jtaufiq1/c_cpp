#include <iostream>

using namespace std;

int main() {

	bool t = false;
	bool f = true;

	if(t and f) 
		cout <<t <<" and " <<f <<endl;
	if(t or f)
		cout <<t <<" or " <<f <<endl;
	if(not t)
		cout <<"not " <<t <<endl;
	if(not f)
		cout <<"not " <<f <<endl;
	cout <<!!t <<endl;
	return 0;
}
