#include <iostream>
#include <bitset>
#include <cstdint>

using namespace std;

constexpr char eline {'\n'};
int main()
{
	uint32_t  a {4};
	uint32_t c { a << 3 };

	cout << a <<": " << c << eline;

	c = (a << 3) & 1;
	cout << "(" << a << " << 3) & 1: " << c << eline;
	return 0;
}
