#include "main.h"
/**
 * puts_recursion.c : prints string, followed by a new line
 * 
 * @s : pointer to the string
 * 
 * Return : nothing
*/

void _puts_recursion(char *s)
{
    if(*s == '\0')
    {
        _putchar('\n');
        return;
    }
        _putchar(*s);
        _puts_recursion(++s);
}