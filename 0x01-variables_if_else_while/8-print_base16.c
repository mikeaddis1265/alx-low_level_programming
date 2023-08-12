#include<stdio.h>
/**
 * main - Starting point
 *
 * Description: print reverse order
 *
 * Return: 0
 */
int main(void)
{
int i = 0;
for (; i < 16; i++)
{
if (i < 10)    
{
putchar('0' + i);
}
else
{
putchar('a' + (i-10));
}
}
putchar('\n');
return (0);
}