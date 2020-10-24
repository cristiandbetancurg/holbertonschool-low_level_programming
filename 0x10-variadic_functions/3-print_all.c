#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function prints anything.
 * @format: formato
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *sep = ", ";
	va_list valist;

	va_start(valist, format);
	while (format != NULL && format[i] != '\0')
	{
		if (format[i + 1] == '\0')
			sep = "";
		switch (format[i])
		{
			case 'i':
				printf("%d%s", va_arg(valist, int), sep);
				break;
			case 'c':
				printf("%c%s", va_arg(valist, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(valist, double), sep);
				break;
			case 's':
				str = va_arg(valist, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}
