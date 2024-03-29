#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: int
 * @s: square root
 * Return: int
*/

int square(int n, int s);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - finds the square root
 * @n: int
 * @s: square root
 * Return: natural square root
*/

int square(int n, int s)
{
	if (s * s == n)
		return (s);
	else if (s * s < n)
		return (square(n, s + 1));
	else
		return (-1);
}
