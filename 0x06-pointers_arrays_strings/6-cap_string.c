#include "main.h"

/**
 * cap_string - capitalizes the Strings in str.
 * @str: passed string to be capitalized.
 * Return: returns the pointer to str.
 */

char *cap_string(char *str)
{
	int num_chars, counter;
	char ch, next_char;

	num_chars = 0;
	while (*(str + num_chars) != '\0')
		num_chars++;

	for (counter = 0; counter < num_chars; counter++)
	{
		ch = *(str + counter);

		if (ch == ' ' || ch == ',' || ch == ';' || ch == '.'
				|| ch == '!' || ch == '?' || ch == '"'
				|| ch == '(' || ch == ')' || ch == '{'
				|| ch == '}' || ch == '\n' || ch == '\t')
		{
			next_char = *(str + counter + 1);
			if (next_char >= 97 && next_char <= 122)
				*(str + counter + 1) -= 32;
		}
	}
	return (str);
}
