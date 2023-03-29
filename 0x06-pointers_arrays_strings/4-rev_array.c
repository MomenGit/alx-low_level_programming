/**
 * rev_array - reverses int array
 * @a: array of integers
 * @n: size of array a
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
