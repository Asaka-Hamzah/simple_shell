#include "shell.h"

/**
 * print_list - A function that prints all elements of a list_t
 * linked list
 * @h: The pointer to first node
 *
 * Return: size of list
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		_puts(convert_number(h->num, 10, 0));
		_putchar(':');
		_putchar(' ');
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * list_to_strings - A function that returns an array of strings
 * of list str
 * @head: The pointer to first node
 *
 * Return: The array of strings
*/

char **list_to_strings(list_t *head)
{
	list_t *node = head;
	size_t i = list_len(head), j;
	char **strs;
	char *str;

	if (!head || !i)
		return (NULL);
	strs = malloc(sizeof(char *) * (i + 1));

	if (!strs)
		return (NULL);
	for (i = 0; node; node = node->next, i++)
	{
		str = malloc(_strlen(node->str) + 1);
		if (!str)
		{
			for (j = 0; j < i; j++)
				free(strs[j]);
			free(strs);
			return (NULL);
		}

		str = _strcpy(str, node->str);
		strs[i] = str;
	}

	strs[i] = NULL;
	return (strs);
}

/**
 * get_node_index - A function that gets the index of a node
 * @node: The pointer to the node
 * @head: The pointer to list head
 *
 * Return: The index of node or -1
*/

ssize_t get_node_index(list_t *head, list_t *node)
{
	size_t i = 0;

	while (head)
	{
		if (head == node)
			return (i);
		head = head->next;
		i++;
	}
	return (-1);
}

/**
 * list_len - A function that determines length of linked list
 * @h: pointer to first node
 *
 * Return: The size of list
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * node_starts_with - A function that returns node whose string
 * starts with prefix
 * @prefix: The string to match
 * @node: The pointer to list head
 * @c: The next character after prefix to match
 *
 * Return: The matched node or NULL
*/

list_t *node_starts_with(list_t *node, char *prefix, char c)
{
	char *p = NULL;

	while (node)
	{
		p = starts_with(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
			return (node);
		node = node->next;
	}
	return (NULL);
}