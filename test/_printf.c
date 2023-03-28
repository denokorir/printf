#include <stdio.h>
#include "_putchar.c"
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
		}
	}
		va_end(args);
		return (chars_printed);
}
