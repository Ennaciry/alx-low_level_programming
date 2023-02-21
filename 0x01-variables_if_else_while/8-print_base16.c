#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 on success
 */
int main(void)
{
	int d;
	char c;

	c = 'a';
	d = 0;
	while (d < 10)
	{
	putchar(d + '0');
	d++;
	}
	while (c <= 'f')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
