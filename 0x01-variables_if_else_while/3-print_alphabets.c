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
		putchar(a);
	for (a = 65; a < 91; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
