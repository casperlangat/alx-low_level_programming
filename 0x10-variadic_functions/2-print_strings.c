#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 *  print_strings - prints strings, followed by new line
 *  @separator: tp print between strings
 *  @n: how many args
 *  Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *current;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		current = va_arg(args, char*);

		if (current != NULL)
		{
			printf("%s", current);
		}
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
		{
			Printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
