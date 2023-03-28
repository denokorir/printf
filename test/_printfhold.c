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
	int chars_printed = 0;
	int div = 1;

	va_start(args, format);

	while (*format != '\0')	{
		if (*format == '%') {
			format++;
			if (*format == 'c') {
				_putchar(va_arg(args, int));
				chars_printed++;
			}
			else if (*format == 's') {
				const char *s = va_arg(args, const char *);

				while (*s != '\0') {
					_putchar(*s);
					s++;
					chars_printed++;
				}
			}
			else if (*format == 'd' || *format == 'i') {
				int number = va_arg(args, int);
				if (number < 0) {
					_putchar('-');
					number = -number;
					chars_printed++;
				}
				while (number / div > 9) {
					div *= 10;
				}
				while (div > 0) {
					_putchar ('0' + number / div);
					number %= div;
					div /= 10;
					chars_printed++;
				}
			}
			else if (*format == '%') {
				_putchar('%');
				chars_printed++;
			}
			else {
			_putchar('%');
			_putchar(*format);
			chars_printed +=2;
		}
	}
		else {
			_putchar(*format);
			chars_printed++;
		}
		format++;
	}
	va_end(args);
	return (chars_printed);
}
