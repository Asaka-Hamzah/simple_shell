#include "shell.h"

/**
 * starts_with - A function that checks if needle starts with
 * haystack
 * @haystack: The string to search
 * @needle: The substring to find
 *
 * Return: The address of next char of haystack or NULL
*/

char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strdup - A function that duplicates a string
 * @str: The string that is to be duplicated
 *
 * Return: A pointer to the duplicated string
*/

char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));

	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 * _putchar - A function that writes the character to c to stdout
 * @c: The character to be printed
 *
 * Return: 1(success), -1(error)
*/

int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}

	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
