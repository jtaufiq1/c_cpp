#include <stdio.h>
#include <cctype>

using namespace std;

/**
 * Character type functions: cctype
 */

int main(int argc, char *argv[]) {

	constexpr char c {'a'};

	printf("%c: %c\n",c, toupper(c));


	char c_u {toupper(c)};
	if(isupper(c_u)) {
		printf(" %c\n",c_u);
	}
		

return 0;
}
