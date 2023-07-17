#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers from 0 to 9 using putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
