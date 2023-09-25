#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: a string
 * @accept: a string
 *
 * Return: the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (strchr(accept, s[i]) == NULL)
		{
			break;
		}
	}
	return (i);
}
