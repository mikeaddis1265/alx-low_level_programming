#include<stdio.h>
/**
 * main - Starting point
 *
 * Description: print digits
 *
 * Return: 0
 */
int main(void)
{
int i = 0;
while (i <= 9)
{
putchar('0' + i);
i++;
}
return(0);
}