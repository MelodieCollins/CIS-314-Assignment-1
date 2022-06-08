#include <stdio.h>

void printBytes(unsigned char *start, int len){
	for(int i = 0; i < len; ++i) {
		printf("%.2x", start[i]);
	}
	printf("\n");
}

void printInt(int x){
	printBytes((unsigned char *) &x, sizeof(int));
}

void printFloat(float x){
	printBytes((unsigned char *) &x, sizeof(float));
}

void printShort(short x){
	printBytes((unsigned char *) &x,  sizeof(short));
}

void printLong(long x){
	printBytes((unsigned char *) &x, sizeof(long));
}

void printLongLong(long x){
	printBytes((unsigned char *) &x, sizeof(long));
}

void printDouble(double x){
	printBytes((unsigned char *) &x, sizeof(double));
}

void main(){
	printInt(5);
	printFloat(5);
	printShort(5);
	printLong(5);
	printLongLong(5);
	printDouble(5);
}

//I noticed that double and float do not print 5. Based on the readings I understand that this is because double and float are not encoded as ints, but rather as IEEE-754 floating point values.
