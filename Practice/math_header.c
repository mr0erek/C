#include<stdio.h>
#include<math.h>
#include<stdlib.h> // as compiler suggested to import it!, for abs.
int main() {

    int x = 9 ;
    x = sqrt(x);
    printf("\n%d", x);
    
    x = pow(x, 2); // x taken as base n 2 as exponential 
    printf("\n%d", x);

    float y = 3.1415;
    // y = round(y); //roundoff 
    // y = ceil(y); //round_up
    y = floor(y); // round_down
    printf("\n%f", y);
    x = -9;
    x = abs(x); //absolute value, converts -9 to 9
    // y = log(y); natural logarithm
    // printf("\n%f", y);
    y = 45;
    // y = sin(y);
    // y = cos(y);
    y = tan(y); // and there are more check docs for specific header file.
    printf("\n%f", y);



    return 0;
}