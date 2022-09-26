#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: double pointer
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	unsigned int w, j;

	for (w = 0; w < 8; w++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[w][j]);
			_putchar('\n');
	}
}
