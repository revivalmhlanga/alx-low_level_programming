#include "main.h"

/**
 * helperFunction - checks if sqrt of a number exists.
 * @n: number to calculate the square root of
 * @pSqrt: possible sqrt of number.
 *
 * Return: sqrt of a number of -1 for error.
 */
int helperFunction(int n, int pSqrt)
{
	if ((pSqrt * pSqrt) == n)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > n)
			return (-1);

	return (helperFunction(n, pSqrt + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 * -1 if n does not have a natural sqrt.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helperFunction(n, 0));
}
