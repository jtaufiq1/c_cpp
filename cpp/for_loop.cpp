#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {

	vector<int> nums;
       	nums = {10, 12, 14, 16, 18, 20, 99, 13, 90, 76, 44};

	for(unsigned i {0}; i < nums.size(); i++) {
		cout << nums.at(i) << ((i % 2 == 1) ? '\n' : ' ');
	}
	cout << endl;

	return 0;
}
