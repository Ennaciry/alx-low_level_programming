#include"main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: `str`
 */

char *cap_string(char *str)
{
	int i, j;
	int z;
	char nots[] = ",;.!?(){}\n\t\" ";

	for (i = 0, z  = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
			z = 1;
		for (j = 0; nots[j] != '\0'; j++)
		{
			if (nots[j] == str[i])
				z = 1;
		}

		if (z)
		{
			if (str[i] > 96 && str[i] < 123)
			{
				str[i] -= 32;
				z = 0;
			}
			else if (str[i] > 64 && str[i] < 91)
				z = 0;
			else if (str[i] > 47 && str[i] < 58)
				z = 0;
		}
	}
	return (str);
}
