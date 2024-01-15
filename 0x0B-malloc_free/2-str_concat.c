#include <stdio.h>
#include <stdlib.h>
/**
 *str_concat-  function that concatenates two strings.
 *
 *@s1: pointr to first string
 *
 *@s2: pointer to second string.
 *
 *Return: pointr to new concatinate string, or NULL if empty string.
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
    int count, i;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	count = 0, i = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{	
			count++;
		}
	
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			count++;
		}
	}

	ptr = (char *)malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);

	}

	for (i = 0; s1 != NULL && s1[i] != '\0'; i++)
	{
		ptr[count] = s1[i];
		count++;
	}
	i = 0;
        for (i = 0; s2 != NULL && s2[i] != '\0'; i++)
        {
                ptr[count] = s2[i];
                count++;
        }
	ptr[count] = '\0';
	return (ptr);
}
