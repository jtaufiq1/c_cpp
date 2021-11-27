#include <iostream>
#include <vector>

int max(const int m, const int n);

using namespace std;

int main(int argc, char* argv[])
{
	vector<int> list { 100, 120, 1140, 809, 8'180'120, 112, 89, 76, 38, 30, 3830 };

	auto tmp_max { list.at(0) }; 
	auto max_val { tmp_max };

	for (uint32_t i {0}, j {1}; i < list.size() - 1; i++, j++) {
		// Grab ith and jth value
		int val_m {list.at(i)};
		int val_n {list.at(j)};

		// Compare ith and jth value
		// assign max to tmp_max
		tmp_max = max(val_m, val_n);

		// Compare max_val and tmp_max values
		max_val = max(tmp_max, max_val);

	}
	cout << "\t\t" << max_val << endl;

	return 0;
}

int max(const int m, const int n)
{
	int max_num { m };

	if(n > m)
		max_num = n;

	return max_num;
}
