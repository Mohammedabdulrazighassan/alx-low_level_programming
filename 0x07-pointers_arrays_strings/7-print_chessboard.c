#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: rows
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int hello, h;

	for (hello = 0; hello < 8; hello++)
	{
		for (h = 0; h < 8; h++)
		{
			_putchar(a[hello][h]);
		}
		_putchar('\n');
	}
}
