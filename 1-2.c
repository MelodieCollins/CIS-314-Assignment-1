#include <stdio.h>

//replace byte i of x by byte b
unsigned int replace(unsigned int x, int i, unsigned char b) {
	//start at byte 0 and shift to align input byte
	unsigned int align = b<< (i<< 3);
	//use mask to isolate bytes that should remain
	unsigned int mask = ~(0xFF<< (i<< 3));
	unsigned int rem = mask & x;
	//combine remainder bytes with newly aligned b
	unsigned int result = rem | align;
	//return result
	return result;
}

void main(){
	printf("replace(0x12345678, 3, 0xAB) : %.8x\n", replace(0x12345678, 3, 0xAB));
	printf("replace(0x12345678, 0, 0xAB) : %.8x\n", replace(0x12345678, 0, 0xAB));
}
