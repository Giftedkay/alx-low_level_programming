#include "main.h"

/**
 * more_numbers - prints 10times the number, from 0 to 14
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int x, y;

	for  (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
				_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}
