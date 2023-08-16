#include <unistd.h>
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_alphabet(void);

int _putchar(char c)
{
    return (write(1, &c, 1));
}

#endif/* MAIN_H */
