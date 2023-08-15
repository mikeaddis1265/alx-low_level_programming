#include "main.h"
/*
 * using header file to use programmers funtions
 * 
 * main -starting point funtion
 * Description -a program to print a word
 * exit main-after excetion the main funtion will close
 */

int main(void)
{
	char name[] = "_putchar";
	int i = 0;

	/*use for loop to print out each character*/
	for (; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');
return (0);
}

