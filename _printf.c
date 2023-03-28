#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 * Return: str
 */
int _puts(char *str)
{
	int position = 0;

	while (str[position] != '\0')
	{
		_putchar(str[position]);
		position++;
	}
	return (position);
}
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
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				chars_printed++;
				i += 2;
			}
			else if (format[i + 1] == 's')
			{
				chars_printed = _puts(va_arg(args, char *));
				i += 2;
			}
			else
			{
				_putchar(format[i]);
				chars_printed++;
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			chars_printed++;
			i++;
		}
	}
	va_end(args);
	return (chars_printed);
}
