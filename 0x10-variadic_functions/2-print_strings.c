#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings separated by a provided separator.
 * If separator is NULL, nothing is printed. And if one of the strings is
 * NULL, the string -> (nil) is printed on the behalf.
 *
 * @n: number of elements.
 * @separator: separator to be used.
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *str;

	if (separator != NULL)
	{
		if (n > 0)
		{
			va_list list;

			va_start(list, n);
			str = va_arg(list, char*);

			if (str == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", str);

			for (index = 1; index < n; index++)
			{
				str = va_arg(list, char*);

				if (str == NULL)
					printf(", %s", "(nil)");
				else
					printf(", %s", str);
			}
			printf("\n");

			va_end(list);
		}
	}
}
