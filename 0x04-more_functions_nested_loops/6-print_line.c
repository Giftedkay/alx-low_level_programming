#include "main.h"

/**
 * print_line - function that draws straight line in the terminal
 * @n: integer parameter
 *
 * Retur: Always zero
 */

void print_line(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar(95);
		_putchar('\n');
	}
}
