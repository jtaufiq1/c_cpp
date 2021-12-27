#include <iostream>
#include <string>

using std::cout;

int main(int argc, char *argv[])
{
	// Convert argv 1 to binary if it is greater than
	// or if it is less than 0

	int test_n {47};
	for(auto i = 7; i >= 0; i--) {
		if(i == 0)
			~i;
		cout << (~(test_n >> i) & 1);
	}

	return 0;
}
