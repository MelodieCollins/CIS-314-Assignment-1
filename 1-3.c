#include <stdio.h>

int oddBit(unsigned int x) {
	//create bit mask to isolate odd bits
	unsigned int mask = 0xAAAAAAAA & x;
	//return 1 if x has at least one bit with a value of 1 at an odd index, 0 otherwise
	return !(!mask);
}

void main() {
	printf("oddBit(0x1) : %i\n", oddBit(0x1));
	printf("oddBit(0x2) : %i\n", oddBit(0x2));
	printf("oddBit(0x3) : %i\n", oddBit(0x3));
	printf("oddBit(0x4) : %i\n", oddBit(0x4));
	printf("oddBit(0xFFFFFFFF) : %i\n", oddBit(0xFFFFFFFF));
	printf("oddBit(0xAAAAAAAA) : %i\n", oddBit(0xAAAAAAAA));
	printf("oddBit(0x55555555) : %i\n", oddBit(0x55555555));
}
