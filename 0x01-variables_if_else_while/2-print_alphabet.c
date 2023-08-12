#include<stdio.h>
/**
 * main - Starting point
 *
 * Description: display all alphabet
 *
 * Return: 0
 */
int main()
{
char letter='a';
while(letter<='z')
{
putchar(letter);
letter++;  
}
printf("\n");
return(0);
}
