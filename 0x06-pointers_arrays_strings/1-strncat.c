#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
