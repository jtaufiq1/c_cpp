#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstdio>

using namespace std;

int main(int args, char* argv[]){

	int r = 1;
	char* w;

	while(fgets(w))
	{
		cout << w << endl;
		//if(w == '\n'){
			for(int i = 0; i < w.length(); ++i){
				{
				if(w[i] == '\n')
					r += 1;
				}
		}
//	}
	cout <<"Number of Lines: " << r << endl;

	return 0;
}
}
