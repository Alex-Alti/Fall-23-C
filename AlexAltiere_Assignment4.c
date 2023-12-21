// Author: Alex Altiere
// Assignment: Assigment 1
// Date: September 9th, 2023

#include <stdio.h>

int main() {
    char choice;

    do {
        printf("\nMENU:\n"); // Create inital menu for user to choose 
        printf("a. Information about the two programs\n");
        printf("b. Health: BMI Calculator\n");
        printf("c. Math: Point on Cartesian plane locator\n");
        printf("d. Exit\n");

        printf("Enter your choice: "); // Prompt user to enter choice

        scanf(" %c", &choice); // Scan users choice

        switch (choice) { // Create switch to run when user chooses
        case 'a': // Choice A - Display Info about both programs
            printf("Program 1: Program which calculates BMI using weight and height\n");
            printf("Program 2: Point on Cartesian plane locator based on coordinate input\n");
            break;
        case 'b': // Choice B - Calculate BMI and output status
        {
            float weight, height, bmi;
            printf("Enter weight (in pounds): ");
            scanf("%f", &weight);
            printf("Enter height (in inches): ");
            scanf("%f", &height);

            bmi = (703 * weight) / (height * height);

            printf("BMI: %.1f\n", bmi);

            if (bmi < 18.5)
                printf("Weight Status: Underweight\n");
            else if (bmi >= 18.5 && bmi < 25.0)
                printf("Weight Status: Normal\n");
            else if (bmi >= 25.0 && bmi < 30.0)
                printf("Weight Status: Overweight\n");
            else
                printf("Weight Status: Obese\n");
        }
        break;
        case 'c': // Choice B - Prompt user for coordiantes and display which quadrant or axis they fall upon
        {
            float x, y;
            printf("Enter x-coordinate: ");
            scanf("%f", &x);

            printf("Enter y-coordinate: ");
            scanf("%f", &y);

            if (x == 0.0 && y == 0.0)
                printf("The point lies on the origin\n");
            else if (x == 0.0)
                printf("The point lies on the y-axis\n");
            else if (y == 0.0)
                printf("The point lies on the x-axis\n");
            else if (x > 0.0 && y > 0.0)
                printf("The point is located in quadrant I\n");
            else if (x < 0.0 && y > 0.0)
                printf("The point is located in quadrant II\n");
            else if (x < 0.0 && y < 0.0)
                printf("The point is located in quadrant III\n");
            else
                printf("The point is loacted in quadrant IV\n");
        }
        break;
        case 'd': // Choice D - Print response
            printf("Exiting program.\n");
            break;
        default: // Default choice should useer enter another character
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 'd'); // Choice D - Exit program

    return 0;
}
