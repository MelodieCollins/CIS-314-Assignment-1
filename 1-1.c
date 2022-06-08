#include <stdio.h>

unsigned int combine(unsigned int x, unsigned int y) {
	//create bit mask to isolate bytes 3 through 1 from x
	unsigned int new_x = x & 0xFFFFFF00;
	//create bit mask to isolate byte 0 from y
	unsigned int new_y = y & 0x000000FF;
	//combine results
	unsigned int result = new_x | new_y;
	return result;
}

void main(){
	printf("combine(0x12345678, 0xABCDEF00) : %.8x\n", combine(0x12345678,0xABCDEF00));
	printf("combine(0xABCDEF00, 0x12345678) : %.8x\n", combine(0xABCDEF00,0x12345678));
}
