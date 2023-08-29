#include "main.h"
/**
 * print_chessboard : function that print two a chessboard
 *
 * @a : pointer to  the 2d arrary
 *
 * Return : nothing
 */
void print_chessboard(char (*a)[8])
{
	int j = 0;
	int i;

	while (*(a[j]) != '\0')
	{

		for (i = 0; i < 8; i++)
		{
			_putchar(a[j][i]);
		
		}
		j++;
			_putchar('\n');
	}
}