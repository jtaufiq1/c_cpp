#include <iostream>

namespace ns {
	// Range based for loop
	// const int& varName : source
	void ns_func() {
		char ref[5] = {'R', 'e', 'f'};	
		for(const int& n : ref) {
			std::cout << std::string(1, n);
		}
		std::cout << std::endl;
	}
}

int main() {
	ns::ns_func();
	
	return 0;
}

