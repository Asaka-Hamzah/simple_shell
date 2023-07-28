#include "shell.h"

/**
 * _strcmp - A function that performs lexicographical comparison
 * between two strings.
 * @s1: First String
 * @s2: Second String
 *
 * Return: If s1 < s2 (Negative), if s1 > s2 (Positive),
 * s1 == s2 (zero)
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * _strlen - A function that returns the legth of a string
 * @s: The string to check for length
 *
 * Return: Length of string
*/

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * _strcpy - A function that copies a string
 * @src: The source
 * @dest: The destination
 *
 * Return: A pointer to destination
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = 0;
	return (dest);
}

/**
 * _strcat - A function that concatenates two strings
 * @src: The source
 * @dest: The destination
 *
 * Return: A pointer to the destination buffer
*/

char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

/**
 * _puts - A function that prints a input string
 * @str: The string that is to be printed
 *
 * Return: 0(nothing)
*/

void _puts(char *str)
{
	int a = 0;

	if (!str)
		return;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
}
