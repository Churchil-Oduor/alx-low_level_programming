#include "main.h"

/**
 * _atoi - converts string into integer.
 * @s: string to be converted.
 * Return: Returns integer value corresponding to string passed.
 */

int _atoi(char *s)
{
	int count, place_val, total_val, x, check, value;
	char sign;

	count = 0;
	place_val = 1;
	total_val = 0;
	check = 0;
	value = *(s + count);
	
	if (value < 0)
	{
		sign = '-';
		value *= -1;
	}

	while (*(s + count) != '\0')
		++count;

	for (x = 1; x < count; x++)
		place_val *= 10;

	printf("place :%d\n ", place_val);
	for (x = 0; x < count; x++)
	{
		value = *(s + count);

	printf("value :%d\n ", total_val);

		if (value >= 0 || value <= 9)
		{
			total_val += value * place_val;
			place_val /= 10;

	printf("place :%d\n ", place_val);

		}
		else
		{
			
			check = 1;
			break;
		}

	}

	if (check == 0)
		if (sign == '-')
			return (total_val * -1);
		else
			return (total_val);
	else
		return (0);
}
