#include "main.h"

int _print(const char *format, va_list args);

/**
 * _printf - prints output according to a format
 * @format: A string containing zero or more directives
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	count = _print(format, args);
	va_end(args);

	return (count);
}

/**
 * _print - helper function that does the actual printing
 * @format: A string containing zero or more directives
 * @args: A list of arguments to be printed
 * Return: The number of characters printed
 */
int _print(const char *format, va_list args)
{
	int i, count = 0;
	char c, *s;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[++i])
			{
			case 'c':
				c = va_arg(args, int);
				_putchar(c);
				count++;
				break;
			case 's':
				 s = va_arg(args, char *);
				if (s == NULL)
				{
					_print("(null)", NULL);
        			count += 6;
				}
				else
				{
					for (; *s; s++)
					{
						_putchar(*s);
						count++;
					}
				}
				break;
			case '%':
				_putchar('%');
				count++;
				break;
			default:
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
		else
			count += _putchar(format[i]);
	}
	return (count);
}
