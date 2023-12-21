// Author: Alex Altiere
// Assignment: Assigment 3
// Date: September 29th, 2023

#include <stdio.h>

int main() {
    // Step A: Prompt user for the elapsed time since power failure in hours and minutes
    int hours, minutes;
    printf("Please enter hours and minutes since power failure (e.g., 2 30): ");
    scanf("%d %d", &hours, &minutes);

    // Step B: Convert elapsed time since failure to hours in (decimal)
    double totalHours = hours + (minutes / 60.0);

    // Step C: Calculate freezer temperature in Celsius using prvided equation
    double t = totalHours;
    if (t > 16.0) {
        t = 16.0; // Set maximum time at 16 hours
    }
    double freezerTemperatureCelsius = (4 * t * t) / (t + 2) - 20.0;

    // Step D: Convert Celsius to Fahrenheit using provided equation
    double freezerTemperatureFahrenheit = (freezerTemperatureCelsius * 9.0 / 5.0) + 32;

    // Step E: Display the current temperature in both Celsius and Fahrenheit based on elapsed time
    printf("Freezer Temperature:\n");
    printf("   Celsius: %.1lf°C\n", freezerTemperatureCelsius);
    printf("   Fahrenheit: %.1lf°F\n", freezerTemperatureFahrenheit);

    // Step F: Check if ice cream has spoiled
    if (freezerTemperatureCelsius >= -10.0) {
        printf("Your ice cream has spoiled!\n");
    }
    else {
        printf("Your ice cream is still good!\n");
    }

    // Step G: Check if meat and seafood are spoiled
    if (freezerTemperatureCelsius > 4.5) {
        printf("Your meat, poultry, and seafood have spoiled. Please discard them.\n");
    }
    else {
        printf("Your meat, poultry, and seafood are still safe to eat.\n");
    }

    return 0;
}





