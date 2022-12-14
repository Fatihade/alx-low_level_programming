#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated.
 * @old_size: The size in bytes of the allocated space for ptr.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: If new_size == old_size - ptr.
 *         If new_size == 0 and ptr is not NULL - NULL.
 *         Otherwise - a pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *reallocPtr, *clonePtr;
	unsigned int i = 0;

	if (ptr == NULL)
		return (malloc(new_size));

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	reallocPtr = malloc(new_size);
	if (reallocPtr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	clonePtr = ptr;
	if (old_size > new_size)
		old_size = new_size;

	while (i < old_size)
	{
		reallocPtr[i] = clonePtr[i];
		++i;
	}

	free(ptr);
	return (reallocPtr);
}
