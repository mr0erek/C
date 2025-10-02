// structure.c
#include <stdio.h>	
#include <stdbool.h> // true/false and boolean stuff 
#define MAX_IDs 1000
struct  Employee /* created a block enough memory*/
{ /* the size of structure is not sum of all infomation!!, its depanding on your system that you code gets compiled and Ran on, it may add addtional optimizations under_the_hood that add padding characters in b/w these fields that we'r not aware of that are their.*/
	int ID;
	char firstname[64];
	char lastname[64];
	float income;
	bool IS_MANAGER;	
	/* we can logically combine all these infomation to represent single employee */ 
};
union MyUnion_U{ // greater the size, same memory size allocated.
	int x; // this union will only be int X size of byte
	char c;
	short s;

};  

int main(){
	/*
	// int IDs[MAX_IDs]; // array of 5
	// float income;
	// char name[64]; as we need to call more of these datatype (multiple times)
	this is where we use struct keyword. 
	*/
	struct Employee Name_1;
	Name_1.income = 100.00;
	Name_1.IS_MANAGER = true;// or
	struct Employee Name[MAX_IDs]; //array of 1k Name structure;

	int i = 0;
	for (i = 0; i < MAX_IDs; i++){
		Name[i].income = 0;
		Name[i].IS_MANAGER = false;
	}
	printf("%2f\n",Name[10].income);

	union MyUnion_U U;
	U.x = 0x34345454; 
	printf("Half: %hx\nHalf of Half: %hhx\n", U.s, U.c); /* When I'm Using the union, I set the larger value, and by U.s and U.c I'm accessing the smaller part of the Bigger U.x */
}
