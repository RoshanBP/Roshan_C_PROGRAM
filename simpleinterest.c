#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time period (in years): ");
    scanf("%f", &time);

    // Calculate Simple Interest
    simple_interest = (principal * rate * time) / 100;

    // Display the result
    printf("The Simple Interest is: %.2f\n", simple_interest);

    return 0;
}