#include "main.h"
/**
 * _printf - prints output according to a format
 * @format: A string containing zero or more directives
 *
 * Return: The number of characters printed, excluding the null byte used to end output to strings
 */
int _printf(const char *format, ...)
{
    va_list args;
    int i, count = 0;
    char c, *s;

    va_start(args, format);

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
                    while (*s)
                    {
                        _putchar(*s++);
                        count++;
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
        {
            _putchar(format[i]);
            count++;
        }
    }

    va_end(args);

    return (count);
}
