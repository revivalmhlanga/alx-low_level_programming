#include "main.h"
/**
 * helperFunction - returns 0 or 1.
 * @num: number being checked.
 * @i: possible factor of a number.
 *
 * Return: 0 if not prime, 1 if prime.
 */
int helperFunction(int num, int i)
{
	if (i < num)
	{
		return (0);
	}
	else
	{
		return (helperFunction(num, i + 1));
	}
	{
		return (1);
	}
}

/**
 * is_prime_number - checks if number is a prime or not.
 * @n: number to be checked.
 *
 * Return: 1 if number is a prime.
 * 0 if number is not a prime.
 */
int is_prime_number(int n)
{
	if (n  <= 1)
	{
		return (0);
	}
	else
	{
		return (helperFunction(n, 2));
	}
}
