#include "main.h"
/**
 * leet : function change that encodes a string into 1337
 * @s :an input string to encode
 * Return : pointer to s pointer
 */
char *leet(char *p)
{
	char *orginal_p = p;
	int i = 0;
	int j;

	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replaced[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1' };

	while (p[i])
	{	
		
		for (j = 0; j < 10; j++)
		{
			if (p[i] == letters[j])
			{
				p[i] =replaced[j];
			}
		}
		i++;
	}
    return (orginal_p);
}

