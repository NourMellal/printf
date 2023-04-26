#include "main.h"

/**
 * print_exclusive_string - prints a string
 *  with non-printable characters as hex escape sequences
 * @list: the va_list containing the string to print
 * @field_width: the minimum field width (ignored)
 *
 * Return: the number of characters printed
 */
int print_exclusive_string(va_list list, int field_width)
{
	int i = 0, non_printable = 1, count = 0;
	char *str;
	char buffer[3];
	(void)(field_width);

	str = va_arg(list, char *);
	if (!str)
		str = "(null)";

	for (; str[i]; i++)
	{
		non_printable = (str[i] > 0 && str[i] < 32) || (str[i] >= 127);

		if (non_printable)
		{
			(str[i] < 16) ? (count += _puts("\\x0")) : (count += _puts("\\x"));
			buffer[0] = 'A';
			count += to_base_num(str[i], 16, buffer);
		}
		else
			count += _putchar(str[i]);
	}
	return (count);
}
