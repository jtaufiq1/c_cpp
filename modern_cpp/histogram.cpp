#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	// Sample Histogram with vectors
	// Get number of items
	// Add items to a vector
	// Display a pretty histogram of items
	// Exit
	cout << "How many items do you have? ";
	uint32_t num_items;
	cin >> num_items;

	vector<int> data {};
	for(uint32_t i {1}; i <= num_items; ++i) {
		int data_item {};
		cout << "Item " << i << ": ";
		cin >> data_item;

		data.push_back(data_item);
	}

	cout <<"\n\t\tDisplaying Histogram\n";
	for(auto item: data) {
		for(auto i {1}; i <= item; i++) {
			cout << ((i % 5 == 0) ? "*" : "-");
		}
		cout << "\n";
	}

	return 0;
}
