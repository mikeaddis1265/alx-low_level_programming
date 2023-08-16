#include "main.h"
#include <unistd.h>
/**
 *print_alphabet - prints alphabets in lowercase
 *
 *Return: Always 0.
 */
void print_alphabet(void)
{
    char letter = 'a';
    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }
    _putchar('\n');
}
