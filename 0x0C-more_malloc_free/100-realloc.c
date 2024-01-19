#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc-a function that reallocates a memory block using malloc and free.
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 * @old_size: s the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 *
 * Return: pointer to new allocate memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int  count, i, max;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		count = new_size;
		new_ptr = malloc(count);
		free(ptr);

		return (new_ptr);
	}

	if (new_size > old_size)
	{
		count = old_size + (new_size - old_size);
		max = old_size;
	}

	if (old_size > new_size)
	{
		count = new_size;
		max = new_size;
	}

	new_ptr = malloc(count);
	for (i = 0; i < max; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}
	free(ptr);
	return (new_ptr);
}
