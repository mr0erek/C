/* 

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    double weight;
    char unit;
    printf("Enter weight (followed by 'k' for kilograms or 'p' for pounds): ");
    scanf("%lf %c", &weight, &unit);
    if (unit == 'k' || unit == 'K') {
        double pounds = weight * 2.20462;
        printf("%.2f kilograms is %.2f pounds.\n", weight, pounds);
    }
    else if (unit == 'p' || unit == 'P') {
        double kilograms = weight / 2.20462;
        printf("%.2f pounds is %.2f kilograms.\n", weight, kilograms);
    }
    else {
        printf("Invalid unit. Please use 'k' for kilograms or 'p' for pounds.\n");
    }
    return 0;
}