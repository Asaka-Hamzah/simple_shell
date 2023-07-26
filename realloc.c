#include "shell.h"

/**
 * _realloc - A function that reallocates a block of memory
 * @old_size: The byte size of previous block
 * @new_size: The byte sizse of new block
 * @ptr: The pointer to previous malloc'ated block.
 *
 * Return: The point to the oldblock
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);

	if (!p)
		return (NULL);
	old_size = old_size < new_size ? old_size : new_size;

	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);

	return (p);
}

/**
 * _memset - A function that fils memory with a constant type
 * @n: The amount of bytes to be filled
 * @b: the byte to fill pointer (s) with
 * @s: The pointer to the memory area
 *
 * Return: (s)
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - A function that frees a string
 * @pp: The string of strings
 *
 * Return: (a)
*/

void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;

	while (*pp)
		free(*pp++);
	free(a);
}
