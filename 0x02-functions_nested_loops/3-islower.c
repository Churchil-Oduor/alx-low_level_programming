#include "main.h"

/**
  * _islower - checks if passed char is lowercase
  * Return: Returns 1 if is a lowercase and zero if not lowercase
  */

int _islower(int c)
{
	int check;
	char ch;

	for (ch = 97 ; ch < 123 ; ch++)
	{
		if (ch == c)
		{
			check = 1;
			break;
		}
		else
		{
			check = 0;
		}

	}
	return (check);
}
