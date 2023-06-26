#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	
	// Seed the random number generator based on the current time
	srand(time(0));
	// Generate a random number and assign it to the variable 'n'
	n = rand() - RAND_MAX / 2;

	// Generate a random number and assign it to the variable 'n'
	if (n % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	// Check if the last digit of 'n' is 0
	else if (n % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	// The last digit of 'n' is less than 6 and not 0
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);

	return (0);
}
