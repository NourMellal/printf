#include "main.h"

/**
 * print_int - Converts and prints an integer from variadic list.
 * @list: Variadic list containing the integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_int(va_list list)
{
	int num = va_arg(list, long);
	char buffer[50];

	_itoa(num, buffer);
	return (_puts(buffer));
}

/**
 * print_unsigned - Converts an unsigned integer to a string and prints it to
 * the standard output stream.
 *
 * @list: A va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed to the standard output stream.
 */

int print_unsigned(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char buffer[50];

	_itoa(num, buffer);
	return (_puts(buffer));
}

/**
 * print_octal - Converts an unsigned integer to an octal string and prints it
 * to the standard output stream.
 *
 * @list: A va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed to the standard output stream.
 */
int print_octal(va_list list)
{
	char buffer[50];
	unsigned int num = va_arg(list, unsigned int);

	return (to_base_num(num, 8, buffer));
}

/**
 * print_hex - Converts an unsigned integer to a hexadecimal string and prints
 * it to the standard output stream.
 *
 * @list: A va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed to the standard output stream.
 */
int print_hex(va_list list)
{
	char buffer[50];
	unsigned int num = va_arg(list, unsigned int);
	int len = _strlen(buffer);
	int i, field_width = 0;

	if (field_width > len)
	{
		for (i = 0; i < field_width - len; i++)
			_putchar('0');
	}
	return (to_base_num(num, 16, buffer));
}

/**
 * print_HEX - Converts an unsigned integer to a hexadecimal string and prints
 * it to the standard output stream, using uppercase letters for digits A-F.
 *
 * @list: A va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed to the standard output stream.
 */
int print_HEX(va_list list)
{
	char buffer[50];
	unsigned int num = va_arg(list, unsigned int);

	buffer[0] = 'A';
	return (to_base_num(num, 16, buffer));
}
