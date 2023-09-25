#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: a pointer to the memory area where the filling operation starts
 * @b: constant byte that will be used to fill the memory area
 * @n: number of bytes to be filled with the constant byte
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
