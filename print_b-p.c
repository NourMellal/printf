#include "main.h"

/**
 * print_binary - Converts an unsigned integer to a binary string and prints
 * it to the standard output stream.
 *
 * @list: A va_list containing the unsigned integer to print.
 *
 * Return: The number of characters printed to the standard output stream.
 */
int print_binary(va_list list)
{
	char buffer[50];
	unsigned int num = (va_arg(list, unsigned int));

	return (to_base_num(num, 2, buffer));
}

/**
 * print_ptr - Converts a void pointer to a hexadecimal string and prints it
 * to the standard output stream.
 *
 * @list: A va_list containing the void pointer to print.
 *
 * Return: The number of characters printed to the standard output stream.
 */
int print_ptr(va_list list)
{
	char buffer[50];
	void *ptr = va_arg(list, void *);
	unsigned long address = (unsigned long)ptr;

	if (!ptr)
		return (_puts("(nil)"));

	return (_puts("0x") + to_base_num(address, 16, buffer));
}
