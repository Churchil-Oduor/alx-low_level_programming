#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers separated with a
 * separator and at the end a new line.
 *
 * @separator: string to be printed between numbers.
 * @n: total number of arguments.
 * Return: Nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;

	if (separator != NULL)
	{
		va_list list;

		va_start(list, n);

		printf("%d", va_arg(list, unsigned int));

		for (index = 1; index < n; index++)
			printf(", %d", va_arg(list, unsigned int));

		va_end(list);
		printf("\n");
	}

}
