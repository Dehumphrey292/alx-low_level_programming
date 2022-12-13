#include <stdio.h>

/**
 * main - main block
 * desciption: print the alphabet in lower case
 * and the in uppercase, follew by new line
 * Return: 0 (Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= '2')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= '2')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
