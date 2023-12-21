#include <stdio.h>
#include <math.h>


// Assign grades to constant macros
#define COT2000_GRADE 95.0 
#define COP2200_GRADE 92.0
#define ART1201_GRADE 50.0

int main() {
    // 1: Print motivational statements
    printf("Smile Smile!\n"); // First print statement

    
    printf("Joy\n"); // Second print statement 

    printf("Gratitude\n"); // Also second print statement

   
    printf("Code Hard\n"); // Third and fourth print statements

    
    printf("Play Harder\n"); // Fifth print statement

    // 2: Compute the average and stdev of three integers
    int x1, x2, x3;
    double average, stdDev;

    // Prompt the user for three integer values
    printf("\nPlease enter three integer values: ");
    scanf("%d %d %d", &x1, &x2, &x3);

    // Calculate the sum of three values
    int sum = x1 + x2 + x3;

    // Calculate the average of values
    average = (double)(x1 + x2 + x3) / 3.0;

    // Calculate the stdev of values
    stdDev = sqrt(((x1 - average) * (x1 - average) +
        (x2 - average) * (x2 - average) +
        (x3 - average) * (x3 - average)) / (3.0-1.0)); // Stdev formula on instructions is for pop, but value given in example is sample so deduct 1 from n

    // Output the results for user inputs
    printf("\nIntegers: %d, %d, %d\n", x1, x2, x3);
    printf("Sum: %d\n", sum);
    printf("Average: %.2lf\n", average);
    printf("Standard Deviation: %.3lf\n", stdDev);

    // 3: Compute the average and stdev of constant grades
    
    
    // Calculate the average of the grades
    average = (COT2000_GRADE + COP2200_GRADE + ART1201_GRADE) / 3.0;

    // Calculate the stdev of the grades
    stdDev = sqrt(((COT2000_GRADE - average) * (COT2000_GRADE - average) +
        (COP2200_GRADE - average) * (COP2200_GRADE - average) +
        (ART1201_GRADE - average) * (ART1201_GRADE - average)) / (3.0-1.0)); // Assuming this is also sample for stdev

    // Output grades, average, and stdev
    printf("\nGrades for the fall semester:\n");
    printf("COT2000: %.2lf%%\n", COT2000_GRADE);
    printf("COP2200: %.2lf%%\n", COP2200_GRADE);
    printf("ART1201: %.2lf%%\n", ART1201_GRADE);
    printf("Average: %.2lf%%\n", average);
    printf("Standard Deviation: %.3lf%%\n", stdDev);

    return 0;
}

