#include "main.h"
/**
 * _isupper-check for uppercase character
 * @c-is a char input
 * Return - 1 if it is uppercase otherwise 0
*/
int _isupper(int c)
{
    if(c >= 65 && c <= 90)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}