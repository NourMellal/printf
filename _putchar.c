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
