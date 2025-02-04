#include <stdio.h>
#include <math.h>
#include "asgn2.h"

int main(){
    float finalPrice = calculateDiscount(280.99, 20.00);
    printf("Final price: %.2f\n", finalPrice);

    int arrayOfNumbers[] = {30, 1, 2, 13, 6, 5};
    int size = 6;
    int count = greaterThanIndex(arrayOfNumbers, size);
    printf("Count of number greater than index: %d\n", count);

    int n = 1586;
    int sum = sumOfDigits(n);
    printf("Sum of digits: %d\n", sum);

    float avg_exams = 76, avg_hw = 88;
    int attendance = 25;
    printf("Grader result: \n");
    grader(avg_exams, avg_hw, attendance);

    // Test monthlyPayment
    float principal = 100000, rate = 3.5, years = 30;
    float payment = monthlyPayment(principal, rate, years);
    printf("Monthly payment: %.2f\n", payment);

    return 0;

   
}