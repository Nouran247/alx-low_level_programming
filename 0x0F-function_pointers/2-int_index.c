#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: the int array
 * @size: the array size
 * @cmp: is a pointer to the function to be used to compare values
 * Return: the integer index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
