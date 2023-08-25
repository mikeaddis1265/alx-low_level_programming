#include "main.h"
/**
 * root13 : function that encodes string using rot12 encryption
 * @p : pointer to string
 *
 * Return : pointer to  the string pointer p
 */
char *rot13(char *p)
{
	char *original_p = p;

	int i = 0;

	while (p[i])
	{
		while ((p[i] >= 'a' && p[i] <= 'z') || (p[i] >= 'A' && p[i] <= 'Z'))
		{
			if ((p[i] >= 'a' && p[i] <= 'm') || (p[i] >= 'A' && p[i] <= 'M'))
			{
				p[i] = p[i] + 13;
			}
			else
			{
				p[i] = p[i] - 13;
			}
			i++;
		}
		i++;
	}
	return (original_p);
}
