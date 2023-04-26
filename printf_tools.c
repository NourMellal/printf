#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;

	return (i);
}
/**
 * _strlenc - returns the length of a string for const char
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;

	return (i);
}

/**
 * reverse_str - Reverses a string in place.
 * @s: The string to be reversed.
 *
 * Return: void.
 */
void reverse_str(char s[])
{
	unsigned int i, len;
	char temp;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}

/**
 * _itoa - Converts an integer to a string.
 * @n: The integer to be converted.
 * @s: A character array to store the resulting string.
 *
 * Return: void.
 */
void _itoa(long n, char s[])
{
	long sign = n;
	unsigned int i = 0;

	if (sign < 0)
		n = -n;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse_str(s);
}

/**
 * to_base_num - Converts an unsigned long integer to a string in the specified
 * base and stores the result in a buffer.
 *
 * @num: The unsigned long integer to convert.
 * @base: The base to convert to.
 * @buffer: A buffer to store the resulting string.
 *
 * Return: The number of characters printed to the standard output stream.
 */

int to_base_num(unsigned long num, int base, char buffer[])
{
	int i = 0, rem;
	char hex_case = (buffer[0] == 'A') ? 'A' : 'a';

	(num == 0) && (buffer[i++] = '0');

	while (num > 0)
	{
		rem = num % base;

		if (rem < 10)
			buffer[i++] = rem + '0';
		else
			buffer[i++] = rem - 10 + hex_case;

		num /= base;
	}
	buffer[i] = '\0';
	reverse_str(buffer);
	return (_puts(buffer));
}
