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
