#include<stdio.h>
/**
 * main - Starting point
 *
 * Description: display all alphabet
 *
 * Return: 0
 */
int main(void)
{
/*print all small letters code*/
char letter = 'a';
while(letter <= 'z')
{
printf ("%c", letter);
letter++;
}
/*print all upper case letters code*/
letter = 'A';
while (letter <= 'Z')
{
printf ("%c", letter);
letter++;
}
printf("\n");
return (0);
}
