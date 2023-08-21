#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;
    int m;

    n = 43;
    m = 87;
    
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);

    printf("n=%d/n", m);
    reset_to_98(&m);
    printf("m=%d", m);

    return (0);
}
