#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function to arguments
 * @n: number of parametros
 * Return: int sum of parametros
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int summation = 0;
	unsigned int i;

	/* initialize valist*/
	va_start(valist, n);

	/* access each argument of valist */
	for (i = 0; i < n; i++)
	{
		summation += va_arg(valist, int);
	}

	/* clean memory reserved*/
	va_end(valist);

	return (summation);
}
