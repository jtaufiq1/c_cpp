#include <iostream>
#include <string>
#include <cctype>
#include <cstdlib>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(int argc, char* argv[]){

	char *c;
	c = new char [1];
	int countChars = 0, countLines = 0, countSpaces = 0;

	int i = 0, x;
	while(c[i] != '.')
	{
		cin >> c[i];
		if(c[i] != '\0')
		{
			++countChars;
			if(c[i] == '\n')
				++countLines;
		}

		else if(c[i] == '\0' || c[i] == '\t')
		{
			countSpaces++;
			putchar('_');
		}
		else
		{
			cout << c[i] << endl;
		}
		/*for(x =1; x < countChars; ++x)
		{
		//	if(c[x] == '\n')
		//	{
		//		countLines++; 
		//	}
	
			if(c[x] == '\0' || c[x] == '\t')
			{
				countSpaces++;
			}

		}*/
	}

	cout <<"\tCharacters: "<< countChars <<endl;
	printf("\tSpaces : %d and Lines: %d\n", countSpaces, countLines);

	delete c; 

	return 0;

}
