#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: argument
 *
 * Return: returns 1 or 0 as the case may be
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
