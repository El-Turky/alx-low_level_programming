#include "main.h"

/**
 * _isalpha - entry point
 * @c: the alpha char
 * Return: 1 if char is letter. Otherwise 0
 */

int _isalpha(int c)

{
	if (c >= 65 && c <= 90)
		return (1);
	else if	(c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
