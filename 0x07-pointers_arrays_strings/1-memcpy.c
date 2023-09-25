#include "main.h"

/**
 * _memcpy - copy a specified number of bytes from one memory area to another
 * @dest: a pointer to the destination memory area
 * @src: a pointer to the source memory area
 * @n:  number of bytes to be copied
 *
 * Return: a pointer to the dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
