#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocate a memory using malloc
 *
 * @b : size of memory to be allocated
 *
 * Return : pointer to the base address of the memory
 *  if malloc fails, status value is equal to 98
 *
 */


void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
