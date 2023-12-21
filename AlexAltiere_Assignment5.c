// Author: Alex Altiere
// Assignment: Assigment 5
// Date: October 29th, 2023

#include <stdio.h>
#include <math.h>

#define PI 3.14159265 // Define pi as a macro

double factorialApproximation(int n) {
    return pow(n, n) * exp(-n) * sqrt(2 * n + 1.0 / 3) * sqrt(PI); // Function to calculate and return the approximation of factorial using the Gosper Equation
}

unsigned long long int factorialAccurate(int n) {  // Function to calculate and return the accurate value of n!
    if (n == 0) return 1;
    unsigned long long int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int inputN() { // Function which prompts user to input any integer without any input parameters
    int n;
    printf("Enter an integer n: ");
    scanf("%d", &n);
    return n;
}

void outputResults(int n, double approx, unsigned long long int accurate) { // Function to output approximation and accurate value
    printf("%d! equals approximately %.5lf\n", n, approx);
    printf("%d! is %llu accurately.\n", n, accurate);
}

double computePercentageError(unsigned long long int accurate, double approx) { // Function to calaculate percentage of the accuracy of the approximation 
    return fabs(accurate - approx) / accurate * 100.0;
}

void outputPercentageError(double percentError) { // Another output function to display the percentage error
    printf("Percentage Error: %.2lf%%\n", percentError);
}

int main() {
    int n;
    char repeat;

    do {
        n = inputN(); // Call function that prompts user to enter N
        if (n < 0) {
            printf("Factorial calculation is not defined for negative numbers.\n"); // If number is negative, print message and return 
            continue;
        }

        double approx = factorialApproximation(n); // Call functions which find approximation and actual for N!, then print results
        unsigned long long int accurate = factorialAccurate(n);
        outputResults(n, approx, accurate);

        double percentError = computePercentageError(accurate, approx); // Call function to find percentage of accuracy and then print this result
        outputPercentageError(percentError);

        
        if (percentError < 1.0) { // Comment on the accuracy of the Gosper equation using perecnt error function
            printf("Gosper's equation provides a good representation of n!.\n");
        }
        else {
            printf("Gosper's equation provides a less accurate representation of n!.\n");
        }

    
  

        printf("Do you want to repeat the program? (y/n): "); // Ask user if they wish to repeat program again, and proceed accordingly 
        scanf(" %c", &repeat);
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}