#include <iostream>
#include <string>
#include <cstdlib>
#include <bitset>

using namespace std;

int main(int argc, char *argv[]) {

	string prog_name = argv[0];
	int decimal_number_one {0};
	int decimal_number_two {0};
	int bit_and {0};

	if(argc > 2) {
		cout << atoi(argv[3]) << '\n';
		decimal_number_one = atoi(argv[1]);
		decimal_number_two = atoi(argv[2]);
	} else {
		cout << prog_name << " requires 3 arguments\n"
			<< "\t\te.g.: " << prog_name << " 20 10\n";
		return -1;
	}

	bit_and = decimal_number_one & decimal_number_two;

	bitset<8> b_x(decimal_number_one);	// x in bits
	bitset<8> b_y(decimal_number_two);	// y in bits
	bitset<8> b_a(bit_and);	// x and y in bits

	cout << decimal_number_one
		<< " & " << decimal_number_two
		<< " = " << bit_and << "\n";
	cout << b_x << " & " << b_y << " = " << b_a << "\n";

	return 0;
}
