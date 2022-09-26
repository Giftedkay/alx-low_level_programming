#include "main.h"

/**
 * *_strchr - function that locates a character in a string
 * @s: string given
 * @c: another char
 * Return: a string
 */

char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
