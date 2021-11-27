#include <iostream>
#include <cstdint>

using namespace std;

int main(int argc, char *argv[])
{

	uint16_t p_num { 1 };
	switch(p_num) {
		case 0: 
			cout << "Not interesting in anything\n";
			cout << "Loner\n";
			break;
		case 1: cout << "\t\tFalling through\n";
		case 2:
		case 5:
		case 15:
			cout << "I'm not a loner, I need just one\n";
			cout << "Maybe More than one\n";
			cout << "Still not enough\n";
			cout << "Not in all above: what are you?\n";
			cout << "I prefer the last\n";
			cout << "which is: " << p_num << "\n";
			break;
		default:
			cout << "I don't go with the crowd!!\n";
	}
	cout << "I am out of switch block\n";

	return 0;
}
