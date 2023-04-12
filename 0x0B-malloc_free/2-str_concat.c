#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates s2 to s1.
 * @s1: string to be concatenated with s2.
 * @s2: string to be concatenated with s1;
 * Return: pointer to memory with the concatenated strings.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int num1, num2, index_1, index_2;

	num1 = 0, num2 = 0, index_2 = 0;

	if (*s1 || *s2 || s1 != NULL || s2 != NULL)
	{
		while (s1[num1] != '\0')
			++num1;

		while (s2[num2] != '\0')
			++num2;

		concat = malloc(sizeof(*concat) * (num1 + num2 + 1));

		if (concat != NULL)
		{
			for (index_1 = 0; index_1 < (num1 + num2 + 1); index_1++)
			{
				if (index_1 < num1)
					concat[index_1] = s1[index_1];
				else if (index_1 < (num1 + num2))
					concat[index_1] = s2[index_2++];
				else
					concat[index_1] = '\0';
			}

			return (concat);
		}
	}
	return (NULL);
}
