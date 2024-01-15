#include <stdlib.h>
#include <stdio.h>

void print_int_array(int *a, int size)
{
    int i;

    i = 0;

    while (i < size)
    {
        printf("%d\n", a[i]);
        i++;
    }
}


int main (int argc, char **argv)
{
    int *a;
    int asize;
    int i;

    if (argc < 2)
    {
        printf("Error, please enter at least on number\n");
        return (1);
    }

    asize = argc - 1;
    a = (int*)(malloc(asize * sizeof(int)));
    i = 0;

    while (i < asize)
    {
        a[i] = atoi(argv[i + 1]);
        i++;
    }

    print_int_array(a, asize);
    free(a);
    return (0);
}