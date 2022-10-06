#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two positive numbers
 * @argc: number of input args
 * @argv: array of input arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int ln1 = 0, ln2 = 0, i = 0, size = 0;
	char *ptr = NULL;
	int offn1 = 0, offn2 = 0;

	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}

	ln1 = _strlen(argv[1], &offn1);
	ln2 = _strlen(argv[2], &offn2);
	size = ln1 + ln2;
	ptr = malloc(size);
	if (ptr == NULL)
	{
		_puts("Error");
		exit(98);
	}

	for (i = 0; i < size; i++)
		ptr[i] = ptr[i] + 48;

	_putNum(ptr, size);

	free(ptr);
	return (0);
}

/**
 * _putNum - prints a char array of nums followed by a new line
 * @n: input string number to be printed
 * @len: lenght to be printed
 *
 * Return: void
 */
void _putNum(char *n, int len)
{
	int i = 0;
	while (len > 0)
	{
		_putchar(n[i]);
		i++;
		len--;
	}
	_putchar('\n');
}


/**
 * _strlen - obtains the length of a string
 * @s: char pointer to the first position in string
 * @offs: offset to first character != 0
 *
 * Return: the length of the string as an int
 */

int _strlen(char *s, int *offs)
{
	int count = 0;
	int first = 0;

	while (*s != '\0')
	{
		if (*s != '0' && first == 0)
		{
			first = 1;
		}
		else if (first == 0)
		{
			*offs = *offs + 1;
			s++;
			continue;
		}

		if (first != 0)
			++count;
		s++;
	}
	return (count);
}
