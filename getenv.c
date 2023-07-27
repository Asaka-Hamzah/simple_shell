#include "shell.h"

/**
 * get_environ - A function that returns the string array copy
 * of our environ
 * @info: The structure that contains potential argument.
 * Used to maintain a constant function prototype.
 *
 * Return: 0
*/

char **get_environ(info_t *info)
{
	if (!info->environ || info->env_changed)
	{
		info->environ = list_to_strings(info->env);
		info->env_changed = 0;
	}

	return (info->environ);
}
