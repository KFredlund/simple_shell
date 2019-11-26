/**
 * print_all - function that prints anything
 * @format: types of arguments passed
 * Return: Output
 */
#include "variadic_functions.h"
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int l = 0, m = 0;
	char *s;

	va_start(list, format);
	while (format && format[l] != '\0')
	{
		if (l != 0 && !m)
			printf(", ");
		switch (format[l])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			s = va_arg(list, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		default:
			m = 1;
			l++;
			continue;
		}
		m = 0;
		l++;
	}
	printf("\n");
	va_end(list);
}
