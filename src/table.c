#include <stdio.h>

int main() {
	int i;
	for(i = 2; i < 7; ++i) {
		for(int j = 0; j < 15; ++j) {
			printf("%d * %d = %d\n", i, j, i*j);
		}
	}
	return 0;
}
