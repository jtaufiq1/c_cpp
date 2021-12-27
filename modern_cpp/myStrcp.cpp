#include <iostream>

using namespace std;

/* My string Copy 
 *
 *
 * By Taufiq Gh
 */

char myStrCp(char *s[], char *t[]){

// C-style string copy for dummies

	int i = 0;

	while(s[i] != EOF) {

		s = new char [1];
		t = new char [1];

		t[i] = s[i];
		i += 1;
	}
	return s;
}

int main(){
	
	char *cp;
	cp = new char [1];
	
	myStrCp('t',cp); 
	cout << cp << endl;

	return 0;
}
