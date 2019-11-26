/**
 * print_numbers - function that prints numbers & new line
 * @separator: string being printed between numbers
 * @n: number of integers passed
 * Return: Output
 */
#include "variadic_functions.h"
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int l;
	unsigned int m;

	if (separator == NULL)
		return;
	va_start(list, n);
	for (l = 0; l < n; l++)
	{
		m = va_arg(list, int);
		printf("%d", m);
		if (separator && l < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
