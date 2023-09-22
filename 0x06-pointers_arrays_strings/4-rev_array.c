#include "main.h"
#include <stdio.h>

/**
 * reverse_array -  reverses the content of an array of integers
 * @a: content of an array of integers
 * @n: number of elements of the array
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
