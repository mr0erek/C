#include <stdio.h>

int main(){
	char a1[20], a2[20];
	printf("Enter your name : ");
	scanf("%s %s", a1, a2);
	char x = a1[0];
	char y = a2[0];
	printf("answer %c %c :", x, y);
	return 0;
}

