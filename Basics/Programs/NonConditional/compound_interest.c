/* 
Compound Interest Calculator
This program calculates the compound interest based on user input for principal amount, rate of interest, and time period.
It uses the formula: A = P(1 + r/n)^(nt), where:
- A is the amount of money accumulated after n years, including interest.
- P is the principal amount (initial investment).
- r is the annual interest rate (decimal).
- n is the number of times that interest is compounded per year.
- t is the time the money is invested for in years.
*/

#include<stdio.h>
#include<math.h>
int main(){
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int time_compounded = 0.0;
    double total_amount = 0.0;

    printf("-------------------Compound Interest Calculator-----------------\n");
    printf("Enter the principal amount (initial investment): ");
    scanf("%lf", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);
    rate = rate / 100; // Convert percentage to decimal

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%d", &time_compounded);
    printf("Enter the number of years the money is invested for: ");
    scanf("%d", &years);
    // Calculate the total amount using the compound interest formula
    total_amount = (principal * pow((1 + rate / time_compounded), (time_compounded * years)));
    // Calculate the compound interest earned
    double compound_interest = total_amount - principal;
    // Display the results
    printf("\nTotal amount after %d years: %.2lf\n", years, total_amount);
    printf("Compound interest earned: %.2lf\n", compound_interest);
      return 0;
}