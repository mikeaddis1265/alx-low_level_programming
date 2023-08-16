#include "main.h"
/**
 * void jack_bauer(void)-function prints all minuate and seconds of day
 * return -nothing
 *//*use nested loop */
void jack_bauer(void)
{
int i = 0;
int j = 0;
	for (;	i <= 23; i++)
	{
		for (;	j <= 59; j++)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + 48);
			_putchar((j % 10) + 48);
			_putchar('\n');
		}
		j = 0;
	}

}

