#include"main.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
	int z;
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		z = a[i];
		a[i] = a[j];
		a[j] = z;
		i++;
		j++;
	}
}
