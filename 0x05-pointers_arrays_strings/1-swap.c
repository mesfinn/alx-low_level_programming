#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Integer one
 * @b: Integer two
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
