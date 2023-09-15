#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: Numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;
		while (j < 15)
		{
			putchar(j + '0');
			j++;
		}
		putchar('\n');
		i++;
	}
}
