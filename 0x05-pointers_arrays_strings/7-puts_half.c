#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
