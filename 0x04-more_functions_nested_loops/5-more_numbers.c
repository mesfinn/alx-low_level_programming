#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Return: Numbers from 0 to 14, 10 times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				putchar((j / 10) + '0');
			}
			putchar((j % 10) + '0');
		}
		putchar('\n');
	}
}
