#include <stdio.h>
#define MAX_SIZE 5
int top = -1;
int stack_arr[MAX_SIZE];
void push(int item){
	if(top == (MAX_SIZE -1)) {
		printf("Stack Overflow!!\n");
		return;
	}else{
		top++;
		stack_arr[top] = item;
		printf("%d is added to %d index of a stack\n", item, top);
	}
}
void pop(){
	if(top == -1) {
		printf("Stack Underflow!!\n");
		return;
	}else{
		printf("%d is poped at index %d of a stack\n",stack_arr[top], top);
		top--;
	}
}

void display(){
	int i;
	if(top == -1){
		printf("Stack is empty!!!\n");
		return;
	}else{
		for(i = 0; i <= top; i++){
			printf("Index : %d, Value : %d \n",i, stack_arr[i]);
		}
	}
}

int main() {
	int choose, n_item;
	while(1){
		printf("\n----Stack Demonstration---\n");
		printf("\n1. Push Item\n2. Pop Item\n3. Display Item\n5. Exit\nChoose you option : ");
		scanf("%d", &choose);
		switch(choose){
			case 1:
				printf("\nEnter an Item to be add:");
				scanf("%d", &n_item);
				push(n_item); break;
			case 2:
				pop(); break;
			case 3:
				display(); break;
			case 4: 
				printf("\n\nProgram Exited!!");
				break;
			default: printf("\nEnter a Valid choice!"); return 1;
		}

	}
	return 0;
}
