#include <iostream>

namespace ns2 {
	// Multi Dimensional Array
	int m_arr[2][3];
	void ns2_func() {
		int input = 14;
		for(int n = 0; n < 2; n++) {
			for(int m = 0; m <= 3; m++) {
				m_arr[n][m] = input * m + n;
			}
			std::cout << std::endl;
		}
	}
	int size = sizeof(m_arr);
}

int main() {
	ns2::ns2_func();
	std::cout<< ns2::size << std::endl;
	
	return 0;
}
