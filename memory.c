#include "shell.h"

/**
 * @ptr: address of the pointer to be freed
 * bfree - frees the pointer and the addres
 *
 * return: 1 if freed 0 otherwise
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
