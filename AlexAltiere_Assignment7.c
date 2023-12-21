// Author: Alex Altiere
// Assignment: Assigment 7
// Date: November 27th, 2023


#include <stdio.h>

// Create sum and average function prototype for question 1
void sum_n_avg(double num1, double num2, double num3, double* sum, double* avg);

// Create final grade calc function prototype for question 2
void final_grade(int points, char* gradePtr, int* missedPtr);

// Create array function prototype for question 3
void percentage(int array1[], double array2[], int SIZE);

int main() {
    // Question 1: sum and average of three inputs
    double one, two, three, sum_of_3, avg_of_3;

    printf("Enter three numbers> ");
    scanf("%lf%lf%lf", &one, &two, &three);
    sum_n_avg(one, two, three, &sum_of_3, &avg_of_3);

    printf("Sum of three numbers: %.2lf\n", sum_of_3);
    printf("Average of three numbers: %.2lf\n", avg_of_3);

    // Question 2: find final grade using points input
    int points;
    char grade;
    int missed;

    printf("\nEnter the student's points> ");
    scanf("%d", &points);
    final_grade(points, &grade, &missed);

    printf("Letter Grade: %c\n", grade);
    printf("Missed Next Grade: %s\n", (missed == 1) ? "Yes" : "No");

    // Question 3: array
    const int SIZE = 10;
    int data_array[SIZE];
    double percentage_array[SIZE];

    printf("\nEnter 10 integers for the data array:\n");
    for (int i = 0; i < SIZE; ++i) {
        scanf("%d", &data_array[i]);
    }

    percentage(data_array, percentage_array, SIZE);

    printf("\nIndex\tValue\t%% of total\n");
    for (int i = 0; i < SIZE; ++i) {
        printf("%d\t%d\t%.2lf\n", i, data_array[i], percentage_array[i]);
    }

    return 0;
}

// Function definition for question 1
void sum_n_avg(double num1, double num2, double num3, double* sum, double* avg) {
    *sum = num1 + num2 + num3;
    *avg = *sum / 3;
}

// Function definition for question 2
void final_grade(int points, char* gradePtr, int* missedPtr) {
    if (points >= 90) {
        *gradePtr = 'A';
    }
    else if (points >= 80) {
        *gradePtr = 'B';
    }
    else if (points >= 70) {
        *gradePtr = 'C';
    }
    else if (points >= 60) {
        *gradePtr = 'D';
    }
    else {
        *gradePtr = 'F';
    }

    *missedPtr = (points % 10 == 9 || points % 10 == 8) ? 1 : 0;
}

// Function definition for question 3
void percentage(int array1[], double array2[], int SIZE) {
    int total = 0;

    // Calc the total of all values in the array
    for (int i = 0; i < SIZE; ++i) {
        total += array1[i];
    }

    // Calc the percentage of each value
    for (int i = 0; i < SIZE; ++i) {
        array2[i] = (array1[i] / (double)total) * 100;
    }
}