#include"main.h"

/**
 * leet - encode a string into 1337
 *  @s: string
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	/*iterate values in array s*/
	while (s[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (s[j] == sl[i] || s[j] == ul[i])
			{
				s[j] = n[i];
				break;
			}
		}
		j++;
	}
	return (s);
}
