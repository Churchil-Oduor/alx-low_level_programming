#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of params passed.
 * @argv: string parameters passed.
 * Return: 0 if success else any other number.
 */

int main(int argc, char *argv[])
{
	int count, check, add;

	check = 0, add = 0;

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			if (atoi(argv[count]) == 0 && argv[count][0] == '0')
				add += atoi(argv[count]);
			else if (atoi(argv[count]) == 0 && argv[count][0] != '0')
				check = 1;
			else
				add += atoi(argv[count]);
		}

		if (check == 0)
		{
			printf("%d\n", add);
			return (0);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	else
	{
		printf("%d\n", 0);
		return (0);
	}
}
