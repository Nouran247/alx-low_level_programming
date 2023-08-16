#include "function_pointers.h"

/**
 * array_iterator - maps an array through a function pointer
 * @array: the int array
 * @size: the array size
 * @action: is a pointer to the function you need to use
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
