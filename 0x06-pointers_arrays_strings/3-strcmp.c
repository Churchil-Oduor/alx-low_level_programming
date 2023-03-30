#include "main.h"

/**
 * _strcmp - compares two strings.Similar to strcmp.
 * @s1: first string to be compared to second.
 * @s2: second string to be compared to first.
 * Return: returns lexicographic difference between comparison
 * in characters of the two strings.
 */

int _strcmp(char *s1, char *s2)
{
	char res;
	int count;

	res = 0;
	count = 0;

	while (*(s1 + count) != '\0')
	{
		if (*(s1 + count) != *(s2 + count))
		{
			res = *(s1 + count) - *(s2 + count);
			break;
		}
		++count;
	}
	return (res);
}
