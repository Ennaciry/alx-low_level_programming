#include "_putchar.h"

/**
 * _isupper - A function that checks for uppercase character.
 * Return: 1 if c is uppercase or 0 otherwise
 */
int _isupper(int c)
{
	char ch = 'A';
	int isupper = 0;

	for (; ch <= 'Z'; ch++)
	{
		if (c == ch)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
