#include "main.h"
/**
 * _putchar - Writes a character to standard output
 *
 * @c: The character to be printed
 *
 * Return: None
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - Prints a string to the console.
 * @str: The string to be printed.
 *
 * Return: The number of characters printed.
 */

int _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
