
// #include "main.h"

// /**
//  * main - Starting point
//  *
//  * Description: display all alphabet
//  *
//  * Return: 0
//  */
// int main(void)
// {
//     print_alphabet();    
//     return (0);
// }

// void print_alphabet(void)
// {
//     char letter = 'a';
//     while (letter <= 'z')
//     {
//         _putchar((letter)); // Corrected this line to pass the variable letter
//         letter++;
//     }
// }
#include "main.h"

/**
 *print_alphabet - prints alphabets in lowercase
 *
 *Return: Always 0.
 */

void print_alphabet(void)
{
int i;

for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}