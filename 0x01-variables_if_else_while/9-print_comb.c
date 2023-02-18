#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i != 0)
	{
	putchar(',');
	putchar(' ');
	}
	putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
