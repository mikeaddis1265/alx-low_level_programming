#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup- function returns a pointer to the duplicated string.
 *
 *@str: pointer to parameter string
 *
 *Return: pointer on sucess, or NULL if no space available.
 *
 */
char *_strdup(char *str)
{
	char *string_ptr;
	int count;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}

	string_ptr = (char *)malloc(sizeof(char) * (count + 1));

	if (string_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < count; i++)
	{
		string_ptr[i] = str[i];
	}
		string_ptr[i] = '\0';
		return (string_ptr);
}
