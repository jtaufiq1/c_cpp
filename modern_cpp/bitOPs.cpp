#include <iostream>

namespace bit_ops {
	void AND() {
		int rs = 4 & 5;
		std::cout << rs << std::endl;
	}
	const void OR() {
		int rs = 5 | 8;
		std::cout << rs << std::endl;
	}
}

int main() {
	bit_ops::AND();
	bit_ops::OR();

	return 0;
}
