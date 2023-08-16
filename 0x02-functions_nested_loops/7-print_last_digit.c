#include "main.h"
/*
 * print_last_digit -funtion 
 * n-integer parameter
 * return - last digit of the number
 */
int print_last_digit(int n)
{
	int x;
	x = (n >= 0) ? n : -n;
	x= x % 10;
	_putchar(x + '0');
	return (x);
}

