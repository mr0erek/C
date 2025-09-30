#include <stdio.h>
#include <stdlib.h>


struct Node {
	int data;
	struct Node* next;
};	
struct Node* head = NULL;

void iAb(int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	newNode->next = head; //null
	head = newNode;
	printf("\n\ninserted %d at the begin", value);
}

void iAe(int value){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	newNode->next = NULL;
	if(head == NULL){
		head = newNode;
	}else{
		struct Node* temp = head;
		while(temp->next != NULL){
			temp = temp->next;
		}
		temp->next = newNode;
	}
	printf("\nImserted %d at the end\n", value);
}

void display(){
	if(head ==NULL){
		printf("linked list is empty");
		return;
	}else{
		struct Node* temp = head;
		while(temp != NULL){
			printf("%d ->", temp->data);
			temp = temp -> next;
		}
		printf("\n");
	}
}

int main(){
	iAb(10);iAe(20);iAb(23);iAe(30);display();return 0;
}
