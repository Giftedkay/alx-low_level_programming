#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13
 * @s: input string
 *
 * Return: a ponter to the encoded string
 */

char *rot13(char *s)
{
	int count = 0, i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVCWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count == alphabet[i]))
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}
	return (s);
}
