#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: integers array
 * @n: size of array a
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d%s", a[i], (i == n - 1) ? "" : ", ");
	}
	putchar('\n');
}
