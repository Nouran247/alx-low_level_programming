#include"main.h"

/**
 * _isalpha - checks if character  is a letter, lowercase or uppercase
 *
 * @c: takes input from other functions
 *
 * Return: Returns 1 if c is a letter,
 *          Returns 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
