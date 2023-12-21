#include <stdio.h>

// Author: Alex Altiere
// Assignment: Assigment 1
// Date: September 9th, 2023

int main() {
	int Birthday = 0;
	int Birthmonth = 0;
	char Lastinital = ' ';

	// Prompt for day, month, and last inital
	printf("Enter your date of birth: ");
	scanf("%d", &Birthday);

	printf("Enter your month of birth: ");
	scanf("%d", &Birthmonth);

	printf("Enter your last inital: ");
	scanf(" %c", &Lastinital);

	// Echo back user input
	printf("Day of birth: %d\n", Birthday);
	printf("Month of birth: %d\n", Birthmonth);
	printf("Last inital: %c\n", Lastinital);

	// Increase birth date and month
	Birthmonth += 12;
	Birthday += 30;

	// Find ASCII code for last inital
	int asciicode = (int)Lastinital;
	printf("ASCII code of last inital '%c' is: %d\n", Lastinital, asciicode);

	// Display updated day/month
	printf("Updated day: %d\n", Birthday);
	printf("Updated month: %d\n", Birthmonth);
	printf("Type cast for last inital: %c\n", Lastinital);

	//Ask for desired salary
	double Desiredsalary = 0.00;
	printf("Enter your desired salary: ");
	scanf("%lf", &Desiredsalary);

	// Echo back desired salary to two decimal places
	printf("Desired Salary: $%.2lf\n", Desiredsalary);

	// Print quote at end of program
	printf("You might not think that programmers are artists, but programming is an extremely creative profession. It's logic-based creativity. \\John Romero\\");


	return 0;
}











