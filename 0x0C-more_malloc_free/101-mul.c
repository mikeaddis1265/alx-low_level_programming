#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * counter- find the lenth of the input.
 * @argv: arguments vector
 * @n: row of the array
 *
 * Return: length of the number.
*/
int counter(int argc, char *argv[])
{
    int i, j;

    for (i = 0; argv[argc][i]; i++)
    {
        if (!(isdigit(argv[argc][i])))
		{
		    printf("Error\n");
			return (1);
		}
    }
        return (i);
}


/**
 * _is_zero - determines if any number is zero
 * @argv: argument vector.
 *
 * Return: no return.
 */
void _is_zero(char *argv[])
{
	int i, isn1, isn2;

    isn1 = 1;
    isn2 = 1;

	for (i = 0; argv[1][i]; i++)
    {
		if (argv[1][i] != '0')
		{
			isn1 = 0;
			break;
		}
    }

	for (i = 0; argv[2][i]; i++)
	{	
        if (argv[2][i] != '0')
		{
			isn2 = 0;
			break;
		}
    }

	if (isn1 == 1 || isn2 == 1)
	{
		printf("0\n");
		exit(0);
	}
}
//intitaliza array

char *_initialize_array(char *ar, int lar)
{
	int i = 0;

	for (i = 0; i < lar; i++)
		ar[i] = '0';
	ar[lar] = '\0';
	return (ar);
}
int main(int argc, char *argv[])
{
    int len1, len2, total;
    char *ptr;

    if (argc != 3)
    {
        printf("Error\n");
        exit (98);
    }

    len1 = counter(2, argv);
    len2 = counter(3,argv);

    _is_zero(argv);

    total = len1 + len2;
    ptr = malloc(total + 1);

    if (total == NULL)
        printf("Error\n"), exit(98);

    ptr = _initialize_array(ptr, total);
    




}