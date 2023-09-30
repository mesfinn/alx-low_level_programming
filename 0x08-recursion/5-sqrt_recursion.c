#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: an integer
 *
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	int start = 1, end = n, ans;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (mid * mid == n)
		{
			return (mid);
		}
		if (mid * mid < n)
		{
			start = mid + 1;
			ans = mid;
		}
		else
		{
			end = mid - 1;
		}
	}
	return (ans);
}
