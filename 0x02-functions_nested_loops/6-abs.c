#include "main.h"
/**
 * abc -get the absolute value of the number
 *
 * n : int type
 *
 * Return: 1 and print + if number is greater than zero
 * Return: 0 and print 0 if n is zero
 * Return: -1 and prints - if n is less than zero
 */
int _abs(int n)
{
	return (n >= 0) ? n : -n;
}
