#ifndef __asgn2__
#define __asgn2__
#include <math.h>

/* the two lines above check to ensure
we haven't already included this header*/


/* your functions go here */
// Note: main() goes in the asgn2.c file
float calculateDiscount(float price, float discount){
    float discountAmount = price * (discount / 100);
    float finalPrice = price - discountAmount;

    return finalPrice;
//function takes in a price and a discount. uses discount amount to caulculate discount
//uses discount amount and price to calculate final price

}

int greaterThanIndex(int arrayOfNumbers[], int size){
   int count = 0;
    for(int i = 0; i < size; i++){
        if(arrayOfNumbers[i] > i){
            count++;
        }
    }
    return count;
// iterates through the array and checks if the numbers at the index of the array is greater than the value.
//if it is it increases the count. the final count is returned atthe end of the loop 
}

int sumOfDigits(int n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n = n / 10;
    }
    return sum;
//loops as long as the sum is greater than zero. adds the last digit of n to the sum.
//then removes the last digit from n. returns the sum of the digits
}

void grader(float avg_exams, float avg_hw, int attendance){

    if(attendance <= 22 || avg_exams <= 75 || avg_hw <= 75 || (avg_exams <= 80 && avg_hw <= 80)){
        printf("FAIL\n");
    }
    else{
        printf("PASS\n");
    }
// simply checks if the certain conditions are met and if they are then it prints fail if not pass
}

float monthlyPayment(float principal, float rate, float years){
    float n = years * 12;
    float r = (rate / 100) / 12; 
    float payment = (principal * r * pow(1 + r, n))/(pow(1 + r, n) -1);
    return payment;
}
//uses the formulas provided to figure out the number of payments the monthly interest rate and
// the monthly payment. 



#endif