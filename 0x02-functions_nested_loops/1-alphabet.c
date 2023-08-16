
#include "main.h"
int _putchar(char c);

/**
 * main - Starting point
 *
 * Description: display all alphabet
 *
 * Return: 0
 */
int main(void)
{
    print_alphabet();
    return (0);
}
/*
 _putchar - Starting point
 *
 * Description: print out a character to stdout
 *
 * Return: and integer
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}
/*f
print_alphabet - Starting point
 *
 * Description: display all alphabet
 *
 * Return: it does not return anything
 * */
void print_alphabet(void)
{
    char letter = 'a';
    while (letter <= 'z')
    {
        _putchar(letter);/*Corrected this line to pass the variable letter*/
        letter++;
    }
    _putchar('\n');
}
