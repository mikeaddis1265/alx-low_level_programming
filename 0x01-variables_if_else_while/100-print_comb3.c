#include <stdio.h>

/**
 *main - Starting point
 *
 *Return: 0
 *
 *Descripitions: Prints all possible combinations of two-digit numbers
 */

int main(void)
{
int i ;
int j = 0;

for (i = 0; i <= 8; i++) 
{
for (j = 0; j <= 9; j++)
{
putchar('0' + i);
putchar('0' + j);
putchar(',');
putchar(' ');
}
}
return (0);   
} 