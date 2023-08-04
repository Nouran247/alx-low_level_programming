#include"main.h"

/**
 * _islower - function to check if character is lowercase
 *
 * @c: checks input of the function
 *
 * Return: Returns 1 if c is lowercase,
 *         returns 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
