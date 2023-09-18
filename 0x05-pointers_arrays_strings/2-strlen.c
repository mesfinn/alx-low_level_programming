#include "main.h"

/**
 * _strlen - Length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}
