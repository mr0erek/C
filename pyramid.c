#include<stdio.h>

int main(){
	int r, c, n, z; r = c = n = z = 0;
	printf("\nValue of it's hight: ");
	scanf("%d",&n);
	n = (n > 0 && n <= 100) ? n : 9;
	printf("\n%d",n);
	for(r = 0; r < n; r++){
		printf("\n");
		for(z = r; z < n; z++){
			printf(" ");
		}
		for(c = 0; c < r ; c++){
			printf(" *");
		}

	}
	return 0;

}
