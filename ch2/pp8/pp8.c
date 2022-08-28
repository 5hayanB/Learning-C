#include <stdio.h>

int main(void)
{
    float balance, interestRate, monthlyPayment, monthlyInterest;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);
    printf("Enter interest rate: ");
    scanf("%f", &interestRate);
    printf("Enter montly payment: ");
    scanf("%f", &monthlyPayment);
    
    monthlyInterest = (interestRate / 100.0f) / 12.0f;

    // 1st month
    balance = (balance - monthlyPayment) + (balance * monthlyInterest);
    printf("Balance remaining after first payment: $%.2f\n", balance);

    // 2nd month
    balance = (balance - monthlyPayment) + (balance * monthlyInterest);
    printf("Balance remaining after second payment: $%.2f\n", balance);

    // 3rd month
    balance = (balance - monthlyPayment) + (balance * monthlyInterest);
    printf("Balance remaining after third payment: $%.2f\n", balance);

    return 0;
}
