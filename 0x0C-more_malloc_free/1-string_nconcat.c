#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1:pointer to first string
 * @s2:pointer to second string
 * @n:bytes of string tow to be concatinate
 *
 * Return: pointer to a newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, count, m;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[j] != '\0')
	{
		j++;
	}
	if (n > j)
	{
		n = j;
	}

	count = n + i + 1;
	ptr = malloc(sizeof(char) * (count));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (m = 0; s1[m]; m++)
	{
		ptr[m] = s1[m];
	}

	for (j = 0; j < n; j++)
	{
		ptr[m] = s2[j];
		m++;
	}
		ptr[m] = '\0';
		return (ptr);
}

