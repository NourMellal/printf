#include "main.h"
/**
 * _printf - prints formatted output to stdout
 * @format: format string to be printed
 * @...: variable argument list
 *
 * This function takes a format string @format and a variable argument list
 * @args, and prints formatted output to stdout according to the format string.
 * The format string can contain conversion specifiers such as %s, %c, and %%,
 * which are handled by the convert_match array of conversion specifiers and
 * corresponding functions. If an unknown conversion specifier is encountered,
 * the function prints the character as-is. The function returns the number of
 * characters printed to stdout, or -1 if an error occurs.
 *
 * Return: number of characters printed, or -1 if an error occurs
 */
int _printf(const char *format, ...)
{
	convert_match m[] = {
		{"%s", printf_string}, {"%c", printf_char},
		{"%%", printf_37},
		{"%d", print_int}, {"%i", print_int},
		{"%r", print_srev}, {"%R", printf_rot13},
		{"%u", print_unsigned}, {"%o", print_octal},
		{"%x", print_hex}, {"%X", print_HEX}
		/*process...*/
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 10;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
