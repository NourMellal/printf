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
