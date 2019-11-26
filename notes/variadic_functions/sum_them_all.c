/**
 * sum_them_all - sum of all parameters
 * @n: numbers
 * Return: Output
 */
#include "variadic_functions.h"
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int l;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(list, n);
	for (l = 0; l < n; l++)

		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
