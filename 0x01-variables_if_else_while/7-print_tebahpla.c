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
char letter = 'z';
while (letter >= 'a')
{
putchar(letter);
letter--;
}
putchar('\n');
return (0);
}
