/**
 * print_strings - function that prints a string & new line
 * @separator: string to be printed between strings
 * @n: number of strings passed
 * Return: Output
 */
#include "variadic_functions.h"
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int l;
	char *strings;

	if (separator == NULL)
		return;

	va_start(list, n);
	for (l = 0; l <= n; l++)
	{
		strings = va_arg(list, char *);
		if (strings)
			printf("%s", strings);
		else
			printf("(nil)");
                if (l < (n - 1) && separator)
                        printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
