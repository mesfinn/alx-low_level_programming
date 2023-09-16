#include <stdlib.h>
#include <time.h>
#include<stdio.h>

/**
 * positive_or_negative - Print if the number is positive or negative
 * @i: The number to be tested
 * Return: Always 0 (Success)
 */
int positive_or_negative(int i)
{
        if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else if (i < 0)
        {
                printf("%d is negative\n", i);
        }
        else
        {
                printf("%d is zero\n", i);
        }
        return (0);
}
