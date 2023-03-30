#include "main.h"

/**
 * string_toupper - changes a string to upper.
 * @a: string to be changed to upper.
 * Return: a pointer to a;
 */

char *string_toupper(char *a)
{
	int count, count_2;
	char ch;

	count = 0;

	while (*(a + count) != '\0')
		++count;

	for (count_2 = 0; count_2 < count; count_2++)
	{
		ch = *(a + count_2);
		if (ch >= 'a' && ch <= 'z')
		{
			*(a + count_2) = ch - 32;
		}
	}
	return (a);
}
