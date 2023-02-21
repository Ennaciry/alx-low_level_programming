#include <stdio.h>

/**
 * main - function
 *
 * Return: 0 on success
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
	if (i != 101 && i != 113)
		putchar(i);
	}
	putchar('\n');
	return (0);
}
