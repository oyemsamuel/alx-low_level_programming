#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
int main(void)
{
    int n;

    // Seed the random number generator based on the current time
    srand(time(0));

    // Generate a random number and assign it to the variable 'n'
    n = rand() - RAND_MAX / 2;

    // Check if 'n' is greater than 0
    if (n > 0)
        printf("%i is positive\n", n);
    // Check if 'n' is less than 0
    else if (n < 0)
        printf("%i is negative\n", n);
    // 'n' must be equal to 0
    else
        printf("%i is zero\n", n);

    return (0);
}
