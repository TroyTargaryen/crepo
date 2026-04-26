#include <stdio.h>

int main(void)
{
    float loan_amount, interest_rate, monthly_payment;
    printf("Enter loan amount: $");
    scanf("%f", &loan_amount);
    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);
    monthly_payment = (interest_rate/100 * loan_amount + loan_amount) / 12;
    printf("Amount Loaned: %.2f, Interest Rate: %.2f%%, Monthly Payment: %.2f \n", loan_amount, interest_rate, monthly_payment);
    printf("Balance remaining after 1 month: %.2f \n", loan_amount - monthly_payment);
    printf("Balance remaining after 2 months: %.2f \n", loan_amount - 2 * monthly_payment);
    printf("Balance remaining after 3 months: %.2f \n", loan_amount - 3 * monthly_payment);


    return 0;
}