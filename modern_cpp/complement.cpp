#include <iostream>
#include <bitset>

using std::cout;
using std::endl;
using std::cin;
using std::bitset;

int main(int argc, char *argv[])
{
	// Convert negative number to binary
	int neg_number {-47 + 1};

	bitset<8> x(neg_number);
	cout << ~x << "\n";

	return 0;
}
