#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

// Pretty Frame Function
void prettyFrame(){

	// Read Input
	cout <<"Please enter Your Name: ";
	string name;
	getline(cin, name);

	/* Compute frame
	 *
	 * Greeting Message
	 * 
	 * Blanks (space) around the message
	 *
	 * Fill Top and bottom borders with stars
	 *
	 */

	// Greeting Message
	string greeting = "Welcome, " + name + "!";
	
	// Empty Space(s) around Greeting message
	int pad = 1;

	// rows = space(2) + 3 = 5 rows
	int rows = pad * 2 + 3;

	// hello + name + ! + 2 + 2 = (greeting + 4) columns
	string::size_type cols = greeting.size() + pad * 2 + 2;

	cout << endl;

	// Outer Borders (Rows)
	for(int r = 0; r != rows; ++r){

		// Column count 
		string::size_type c = 0;
		while(c != cols){

			// Put greetings 
			//  after second space
			if(r == pad + 1 && c == pad + 1){
				cout << greeting;
				c += greeting.size();
			}
			else {
				if(r==0 || r==rows-1 || c==0 || c==cols-1){
					cout <<"*";
			       	}
				else {
					cout <<"_";
				}
				++c;
			}
		}
		cout << endl;
	}

	cout <<"Columns: " << cols <<" Rows: " << rows <<endl; 
}

int main(int argc, char* argv[]){
	
	// Calling Pretty Frame with Cmd argument
	prettyFrame();

	return 0;
}
