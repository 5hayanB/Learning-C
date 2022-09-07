#include <stdio.h>

int main(void)
{
    float balance, interestRate, monthlyPayment, monthlyInterest;
    int noOfPayments;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);

    printf("Enter interest rate: ");
    scanf("%f", &interestRate);

    printf("Enter montly payment: ");
    scanf("%f", &monthlyPayment);

    printf("Enter number of monthly payments: ");
    scanf("%d", &noOfPayments);
    
    monthlyInterest = (interestRate / 100.0f) / 12.0f;

    for (int i = 1; i <= noOfPayments; ++i) {
        balance = (balance - monthlyPayment) + (balance * monthlyInterest);
        printf("Balance remaining after payment %d: $%.2f\n", i, balance);
    }

    return 0;
}
