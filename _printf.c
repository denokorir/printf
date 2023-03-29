#include <stdio.h>
#include "main.h"
/**
 * _printf - prints a formated string to stdout
 * @format: format of the string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	int chars_printed = 0, i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char c = (char) va_arg(args, int);

				putchar(c);
				chars_printed++;
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char *);

				chars_printed += _puts(s);
			}
			else if (format[i] == '%')
			{
				putchar('%');
				chars_printed++;
			}
			else
			{
				putchar(format[i - 1]);
				putchar(format[i]);
				chars_printed += 2;
			}
		}
		else
		{
			putchar(format[i]);
			chars_printed++;
		}
		i++;
	}
	va_end(args);
	return (chars_printed);
}
