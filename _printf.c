#include "main.h"
#include <stdarg.h>
/**
 * _printf - prints format to stdout
 * @format: format to be printed
 * Return: chars printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int chars_printed = 0, pos = 0;

	va_start(args, format);

	while (format[pos] != '\0')
	{
		if (format[pos] == '%')
		{
			if (format[pos + 1] == 'c')
			{
				int ch = va_arg(args, int);
				_putchar(ch);
				chars_printed++;
			}
			else if (format[pos + 1] == 's')
			{
				char *str = va_arg(args, char *);
				int i = 0;
				while (str[i] != '\0')
				{
					_putchar(str[i]);
					i++;
					chars_printed++;
				}
			}
			else if (format[pos + 1] == '%')
			{
				_putchar('%');
				chars_printed++;
			}
		}
		else
		{
			_putchar(format[pos]);
			chars_printed++;
=======
	int chars_printed = 0;
	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				_putchar(va_args(args, int))
				chars_printed++;
			}
			else if (*format == 's')
			{
				const char *s = va_arg(args, const char *);
				while (*s != '\0')
				{
					_putchar(*s);
					s++
					chars_printed++;
				}
			}
			else if (*format == '%')
			{
				_putchar('%');
				_putchar(*format);
				chars_printed += 2;
			}
			else
			{
			 _putchar(*format);
			chars_printed++;
			}
>>>>>>> d891f64b1d578cb5226c6b7c84cbcef25cbcbc03
		}
		va_end(args);
		return (chars_printed);
}
