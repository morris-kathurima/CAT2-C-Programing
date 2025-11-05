/* 
  name; morris kathurima
reg n; CT100/G/26260/25
  
*/

#include <stdio.h>

int main() {
    float hours, wage, grossPay, tax, netPay;
    
    //input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    
    printf("Enter hourly wage: ");
    scanf("%f", &wage);
    
    // Calculate
    if (hours <= 40)
        grossPay = hours * wage;
    else
        grossPay = 40 * wage + (hours - 40) * wage * 1.5;
    
    // Calculate taxes
    if (grossPay <= 600)
        tax = 0.15 * grossPay;
    else
        tax = 0.15 * 600 + 0.20 * (grossPay - 600);
    
    // Calculate net pay
    netPay = grossPay - tax;
    
    // results
    printf("\nGross Pay: $%.2f", grossPay);
    printf("\nTaxes: $%.2f", tax);
    printf("\nNet Pay: $%.2f\n", netPay);
    
    return 0;
}
