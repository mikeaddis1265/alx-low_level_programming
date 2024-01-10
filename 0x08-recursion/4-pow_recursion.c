/**
 * _pow_recursion : get the y(nth) power of a number x
 *
 * @x : integer input(base)
 *
 * @y : integer input(exponent)
 *
 * Return : -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if(y < 0)
	{
		return -1;
	}
	
	if(y == 0)
	{
		return 1;
	}
	return (x * _pow_recursion(x, y - 1));
}
