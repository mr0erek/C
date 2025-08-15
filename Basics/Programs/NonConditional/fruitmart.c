/* 
condition-less program
This all will be stuff will be in without any condition.
FRUIT CART
*/
#include<stdio.h>
#include<string.h>


int main(){
    
    int quantity = 0;
    float price = 0.0;
    float total = 0.0;
    char item[50] = "";
    char currency = '₹'; 
    
    printf("\nEnter which fruit you want? : ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1 ] = '\0';
    
    printf("\nWhat's the price of one %s? :%c ", item, currency);
    scanf("%f", &price);

    printf("\nHow much in quantity you needed? : ");
    scanf("%d", &quantity);

    total = (quantity * price);
    printf("\nFor %d %s you'll need to pay %c%.2f", quantity, item, currency, total);

    return 0;
}

