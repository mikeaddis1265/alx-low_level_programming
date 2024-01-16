#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
    char *ptr;
    int i, count, pos, total_chars = 0;

    if (ac == 0 || av == NULL)
    {
        return NULL;
    }


    for (i = 0; i < ac; i++)
    {
        count = 0;
        while (av[i][count])
        {
            count++;
        }
        total_chars += count;
    }

    ptr = (char *)malloc(sizeof(char) * (total_chars + ac + 1));
    if (ptr == NULL)
    {
        return NULL;
    }

    pos = 0;

    for (i = 0; i < ac; i++)
    {
        count = 0;

        while (av[i][count])
        {
            ptr[pos++] = av[i][count++];
        }

        
        ptr[pos++] = '\n';
    }

    ptr[pos] = '\0';

    return ptr;
}
