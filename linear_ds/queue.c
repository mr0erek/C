#include <stdio.h>
#include <stdlib.h> // just for exit();
#define MAX 5
int queue[MAX];
int A = -1, Z = -1;

void enqueue(int item){
	if(Z == MAX -1){
		printf("Queue Overflow !!\n");
		return;
	}else{
		if(A == -1) A = 0;
		Z++;
		queue[Z] = item;
		printf("%d is add at %d index of a queue\n", item, Z);
	}
}
void dequeue(){
	if(A == (MAX - 1) || A > Z){
		printf("Queue Underflow\n");
	}else{
		int item = queue[A];
		printf("%d is Dequeued from %d index\n",item, A);
		A++;
		if(A>Z){ // to reset
			A = Z = -1;
		}
	}
}

void display(){
	int i;
	if(A == -1 || A>Z){
		printf("Queue is empty!!\n");
	}else{
		for( i = A; i <= Z; i++) {
			printf("%d Index, %d Value\n", i, queue[i]);
		}
	}
}

int main() {
	int choose, n_item;
	while(1){
		printf("\n---Queue Demonstration---\n");
		printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nchoose your option: ");
		scanf("%d", &choose);
		switch(choose){
			case 1:
				printf("\nEnter a value: ");
				scanf("%d", &n_item);
				enqueue(n_item);break;
			case 2:
				dequeue();break;
			case 3: 
				display();break;
			case 4:
				exit(0);
			default:
				printf("\nchoose valid option!!");
				return 1;
		}
	}
	return 0;
}
