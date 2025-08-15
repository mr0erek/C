#include <stdio.h>

int main(){
/* 
Formate specifier : Special tokens begin with a % symbol,
                    followed by a character that specifies the data
                    and optional modifiers (width, precision, flags),
                    they control how data us displayed or interpreted
*/
int age = 35;
float price = 120.23;
double PI = 3.144564656766786778915; // we can also use math libs for PI in special case.
char nc = '@';
char  name[] = "Mr0erek is HERE"; // char as string of chars as list of char

printf("int : %d\nfloat : %f\nDouble : %lf : %f\nchar as string : %s\n\nnc var is %c\n========formate specifier========\n", age, price, PI, PI, name, nc); // %lf - long float
// ***************************************************//

// width 

int a,b,c; 
// a = b = c= 9;
a = 1; b = 10; c = 100;
printf("%2d\n%3d\n%4d",a,b,c);
printf("\n%-3d\n%-11d\n%-30d",a,b,c);

// 0 b/w numbers
printf("\n\n\n\n%04d\n%04d\n%04d",a,b,c);
c = -100; b = -10;
printf("\n\n\n\n%+d\n%-d\n%+d",a,b,c);


//precision 


float price_1, price_2, price_3;
price_1 = 212.4333; price_2 = 459.234; price_3 = 38.343;
printf("\n\n%+.2f\n", price_1);
printf("%+2.1f\n", price_2); 
// 7, 4 indicates minimum width to display
printf("%+7.2f\n", price_3);

// more will there soon...
return 0;


}