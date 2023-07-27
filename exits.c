#include "shell.h"

/**
 * *_strncat - A function that concatenates two strings
 * @n: The amount of bytes to be used maximally
 * @src: The second string
 * @dest: The first string
 *
 * Return: The concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;
	char *s = dest;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	if (b < n)
		dest[a] = '\0';
	return (s);
}

/**
 * _strncpy - A function that copies a string
 * @n: The amount of bytes to be used maximally
 * @src: The second string
 * @dest: The first string
 *
 * Return: The concatenated string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a, b;
	char *s = dest;

	a = 0;

	while (src[a] != '\0' && a < n - 1)
	{
		dest[a] = src[a];
		a++;
	}

	if (a < n)
	{
		b = a;

		while (b < n)
		{
			dest[b] = '\0';
			b++;
		}
	}
	return (s);
}

/**
 * *_strchr - A function that locates a character in a string
 * @c: The character that is to be looked for
 * @s: The string that is to be parsed
 *
 * Return: (s)
*/

char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
