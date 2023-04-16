#include "main.h"
#include <stdlib.h>

unsigned int _strlen(char *str);
/**
 * string_nconcat - concatenates two strings.
 * @s1: string to be concatenated with @s2.
 * @s2: string to be concatenated with @s1.
 * @n: n bytes of s2 to be concatenated to s1.
 * Return: pointer to memory holding the string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int num1, num2, index, count, total_count;

	num1 = _strlen(s1);
	num2 = _strlen(s2);
	count = 0;
	total_count = 0;

	if (num1 == 0 && num2 == 0)
	{
		mem = malloc(sizeof(int) * 3);

		if (mem == NULL)
			return (NULL);
		mem[0] = ' ';
		mem[1] = ' ';
		mem[2] = '\0';

		return (mem);
	}

	if (num2 >= n)
	{
		total_count = num1 + n + 1;
		mem = malloc(sizeof(int) * total_count);

	}
	else
	{
		total_count = num1 + num2 + 1;
		mem = malloc(sizeof(int) * total_count);
	}

	if (mem == NULL)
		return (NULL);

	for (index = 0; index < (total_count - 1); index++)
	{
		if (index < num1)
			mem[index] = s1[index];
		else
			mem[index] = s2[count++];
	}

	mem[total_count - 1] = '\0';

	return (mem);
}

/**
 * _strlen - counts length of a string excluding the null terminator.
 * @str: pointer to string passed.
 * Return: length of string.
 */

unsigned int _strlen(char *str)
{
	unsigned int len;

	len = 0;

	if (str == NULL)
	{
		return (0);
	}
	else if (*str)
	{
		while (str[len] != '\0')
			++len;
	}

	return (len);
}
