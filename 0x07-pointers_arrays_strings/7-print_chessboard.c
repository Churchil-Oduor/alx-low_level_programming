#include "main.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: array indicating a row of 8 columns.
 */

void print_chessboard(char (*a)[8])
{
	int rows, colms;

	for (rows = 0; rows < 8; rows++)
	{
		for (colms = 0; colms < 8; colms++)
			_putchar(a[rows][colms]);
		_putchar('\n');
	}
}
