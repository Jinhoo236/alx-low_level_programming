#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings, follow by a new line
 * @separator: seperator to print new strings
 * @n: number ofstrings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_laist valist;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - i && seperator)
			printf("%S", seperator)}
	printf("\n");
	va_end(list);
}
