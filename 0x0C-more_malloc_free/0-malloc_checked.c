#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked- funtion allocates memory using malloc.
 *
 * @b: unsigned int type (size)
 *
 * Return: pointer to address of first byte, or exit(98).
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
