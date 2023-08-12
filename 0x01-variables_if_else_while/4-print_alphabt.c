#include<stdio.h>
/**
 * main - Starting point
 *
 * Description: 
 *
 * Return: 0
 */
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
{
putchar(letter);
}
letter++;
}
putchar('\n');
return (0);
}
