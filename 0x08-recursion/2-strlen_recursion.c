#include "main.h"
/**
 * _strlen_recursion - "Returns the length of a string."
 *
 * @s: "Points to the string to be printed."
 *
 * Return: "Length of the a string."
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s > '\0')
	{
		count += _strlen_recursion(s + 1) + 1;

	}
	return (count);

}
