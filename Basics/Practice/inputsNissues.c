#include <stdio.h>
#include <string.h>

int main()
{
    int age = 0;
    float gpa = 0.0;
    char grade = '\0'; // null byte or null char
    char name[20] = "";
    printf("\nEnter Your age: ");
    scanf("%d", &age);
    printf("\nEnter Your gpa: ");
    scanf("%f", &gpa);
    /*
    When you press enter, input buffer stores '\n' char,
    due to which we faced line breaking issues while entering
    char as a single character
    input buffer => 7.8\n => gpa = 7.8 due to which grade = '\n'
    sol:
    just put white space in scanf(" %c")
    putting space in scanf will skip a byte and starts for scan after whitespace.
    */
    printf("\nEnter Your grade: ");
    scanf(" %c", &grade);
    printf("\nEnter Your name: ");
    /*
    // scanf("%s", &name);
    commented as we need full name including whitespace
    here it cannot be able to read/scan it
    so will use fputs(var_name, sizeof it, stdin)
    also added getchar(); just to avoid another '\n' from grade
    as we don't have control over %c
    */
    getchar();
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    printf("\nYour name: %s", name);
    /*
    Ah! Now here we got few \n for free
    to avoid it we need to break it down
    e.g : input -> ABC ABC

    [ 'A', 'B', 'C', ' ', 'A','B','C','\n']
    now here we can do 1-thing that is,
    we can reassigned by removing '\n' as total length of str - 1
    to null byte.
    so, conclusion

    name[strlen(name) - 1] = "\0"
    strlen from string.h or using for loop

    */
    printf("\nYour age: %d", age);
    printf("\nYour gpa: %.2f", gpa);
    printf("\nYour grade: %c", grade);
    printf("\nYour name: %s", name);
    return 0;
}