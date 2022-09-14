#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 *
 * Return: returns 0
 */

void print_alphabet(void)
{
	char j;

	for (j = 'a' ; j <= 'z' ; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
