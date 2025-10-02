#include<stdio.h>
#include<limits.h>

int main(){
	printf("Size of int datatype modifiers(short, long):\n1. Short : %d\n2. Normal : %d\n3. long : %d",sizeof(short int), sizeof(int), sizeof(long int));

	printf("\n\nSize Range of int (unsigned/signed) magnitude(value):\n1. signed: %d: %d to %d\n2. unsigned: %d: %d to %u\n", sizeof(unsigned int), INT_MIN, INT_MAX, sizeof(signed int), 0, UINT_MAX);

	return 0;
}
