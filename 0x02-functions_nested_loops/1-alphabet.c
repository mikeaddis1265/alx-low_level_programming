
#include "main.h"

/*
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
