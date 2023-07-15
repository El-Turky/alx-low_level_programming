#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 97; a < 123; a++)
	{
		if (a != 101 || a != 113)
		putchar(a);
	}
	putchar('\n');
	return (0);
}
