#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string to be printed
 * Return: nothing
 */
void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
