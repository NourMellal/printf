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
