#include"main.h"

/**
 * print_line - print a straight line
 *
 * @n: is the number of times the character should be printed
*/

void print_line(int n)
{
	int lch;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lch = 1; lch <= n; lch++)
			_putchar('_');
		_putchar('\n');
	}
}
