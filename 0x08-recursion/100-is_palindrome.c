#include "main.h"

/**
 * is_palindrome - finds if a string is a palindrome
 * @s: input pointer to string to be checked
 *
 * Return: 1 if is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	char d[509] = {0};
	int p;

	if (*s == '\0')
		return (1);

	p = _get_rev(s, d);
	d[p] = '\0';

	return (compare(s, d));
}


/**
 * _get_rev - recursive function that saves a string in reverse
 * @s: pointer to string to be reversed
 * @d: destination pointer to store the reversed string
 *
 * Return: position to save every next character in d
 */

int _get_rev(char *s, char *d)
{
	int p = 0;

	if (*(s + 1) != '\0')
		p = _get_rev(s + 1, d);

	d[p] = *s;

	return (p + 1);
}

/**
 * compare - compares 2 strings recursively
 * @s1: string 1 to be compared
 * @s2: string 2 to be compared
 *
 * Return: 1 if equal, 0 if different
 */

int compare(char *s1, char *s2)
{
	if (*(s1 + 1) != '\0')
	{
		if (*s1 == *s2 && compare(s1 + 1, s2 + 1))
			return (1);
		else
			return (0);
	}

	if (*s1 == *s2)
		return (1);

	return (0);
}
