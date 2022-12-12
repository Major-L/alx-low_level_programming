#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 for lowercase character or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 for alphabetic character or 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}

/**
 * _abs - Computes the absolute value of an integer.
 *  @c: The number to be computed.
 *
 *  Return: Absolute value of number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}

/**
 * _isupper - Check if a letter is upper
 * @x: The number to be checked
 *
 * Return: 1 for upper letter or 0 for any else
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}

/**
 * _isdigit - Check if a character is a digit
 * @x: The number to be check
 *
 * Return: 1 for a character that will be a digit or 0 for any else
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}

	return (0);
}

/**
 * _strlen - Returns the length of a string
 *  @s: String to count
 *
 *  Return: String length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
 * _puts - Prints a string
 * @str: The string to print
 *
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}

/**
 * _strcpy - Copy a string
 * @dest: Destination value
 * @src: Source value
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}

	ni *= min;
	return (ni);
}

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}

/**
 * _strncat - Concatenates two strings
 * @dest: The destination value
 * @src: The source value
 * @n: The limit of the concatenation
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}

/**
 * _strncpy - Copy a string
 * @dest: The destination value
 * @src: The source value
 * @n: The copy limit
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}

/**
 *  _strcmp - Compares two strings
 *  @s1: The first string
 *  @s2: The second string
 *
 *  Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, lim;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (r);
}

/**
 * _memset - Fill memory with a constant byte
 *  @s: memory area to fill
 *  @b: constant byte to fill
 *  @n: bytes of memory area to fill
 *
 *  Return: the memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

/**
 * _memcpy - copy memory area
 * @dest: dest memory area
 * @src: source memory area
 * @n: bytes from memory area to copy
 *
 * Return: memory area replaced
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}

/**
 * _strchr - locate character in string
 * @s: source string
 * @c: character to find
 *
 * Return: the string from character found
 */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}

/**
 * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: accepted string
 *
 * Return: number of bytes in the init segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: source string
 * @accept: accepted characters
 *
 * Return: the string since the first found accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}

/**
 * _strstr - locate a substring
 * @haystack: the string to search
 * @needle: the string to find
 *
 * Return: char value
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}

			b++;
		}

		if (needle[b] == '\0')
		{
			return (haystack + a);
		}

		a++;
	}

	return ('\0');
}
