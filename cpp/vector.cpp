#include <vector>
#include <cstdint>

using namespace std;

int main(int argc, char *argv[])
{
	// Declaring to store 5 <elements>
	// vector<int> v;
	// vector<short> vs = { 0, 1, 3, 5 };
	// vector<uint64_t> vl { 2, 3, 2, 27, 24. 38 ....};
	vector<uint16_t> numbers(5);
	numbers[0] = 111;

	// uint16_t i = numbers[2];
	numbers[1] = numbers[4];

	// Calculate sum of 5 <Elements>
	// using a for loop
	uint32_t sum { 0 };
	for(auto l = 0; l < 5; l++)
	{
		sum += numbers[l];
	}

	// Assign Values to vector elements
	for(auto l {0}; l < 5; l++)
	{
		numbers[l] = 2020;
	}

	// Rearrange vector <elements>
	uint16_t tmp { 0 };
	// 1 and 5
	tmp = numbers[0];	
	numbers[0] = numbers[4];
	numbers[4] = tmp;
	// 2 and 4
	tmp = numbers[1];
	numbers[1] = numbers[3];
	numbers[3] = tmp;

	for(auto j {0}; j < 5; j++)
	{
		if(j == 2)
			continue;
		tmp = numbers[j];
		numbers[j] = numbers[j - 1];
		numbers[j - 1] = tmp;
	}

	return 0;
}
