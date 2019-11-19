/**
 * _sqrt_nums - finds square root of number
 * @n: number being checked
 * @d: divisor
 * Return: Output
 */
#include "holberton.h"
int _sqrt_nums(int n, int d)
{
	if (d * d == n)
	{
		return (d);
	}
	if (d * d > n)
	{
		return (-1);
	}
	return (_sqrt_nums(n, d + 1));
}

/**
 * _sqrt_recursion - returns square root of number
 * @n: number being checked
 * Return: Output
 */

int _sqrt_recursion(int n)
{
	int d = 0;

	return (_sqrt_nums(n, d));
}
