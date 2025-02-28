#include <myScansCalculator.h>

void sc_scanNumber(double *number){
    printf("Enter number: ");
    scanf("%lf", number);
}

void sc_scanTwoNumbers(double *first, double *second){
    printf("Enter two numbers separated by space: ");
    scanf("%lf %lf", first, second);
}