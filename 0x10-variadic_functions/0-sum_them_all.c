#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters passed onto it.
 *
 * @n: number of arguments to be passed.
 * Return: sum of all the arguments. and 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, index;
	va_list list;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(list, n);

	for (index = 0; index < n; index++)
		sum += va_arg(list, unsigned int);

	va_end(list);
	return (sum);
}
