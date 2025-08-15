#include<stdio.h>
#include<string.h>

int main() {
    char name[50] = "";
    char surname[50] = "";
    int age = 0;

    printf("Enter your first name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // Remove newline character
    printf("Enter your surname: ");
    fgets(surname, sizeof(surname), stdin);
    surname[strlen(surname) - 1] = '\0'; // Remove newline character
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age < 0 && (strlen(name) == 0 || strlen(surname) == 0)) {
        printf("Try Again!.\n");
    }

    else {
            printf("Hey %s %s, do something in your %d's.\n", name, surname, age);
    }
    return 0;
}   