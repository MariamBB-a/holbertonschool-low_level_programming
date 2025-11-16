#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	va_list a;
	int i = 0;
	char *s, *sep = "";

	va_start(a, format);

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		    format[i] == 'f' || format[i] == 's')
		{
			printf("%s", sep);
			switch (format[i])
			{
			case 'c':
				printf("%c", va_arg(a, int));
				break;
			case 'i':
				printf("%d", va_arg(a, int));
				break;
			case 'f':
				printf("%f", va_arg(a, double));
				break;
			case 's':
				s = va_arg(a, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				break;
			}
			sep = ", ";
		}
		i++;
	}
	va_end(a);
	printf("\n");
}
