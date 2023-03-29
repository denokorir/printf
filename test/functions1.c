#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_binary - converts an unsigned int to binary and prints it
 * @n: unsigned int to convert
 * Return: number of characters printed
 */
int print_binary(unsigned int n)
{
        char *binary_str;
        int x, y, length = 0;

        if (n == 0)
                return (_putchar('0'));
        /*allocate memory for the binary string*/
        binary_str = malloc(sizeof(char) * 33);
        if (binary_str == NULL)
                return (-1);
        /*convert to binary*/
        for (x = 0; n > 0; x++)
        {
                binary_str[x] = (n % 2 == 0) ? '0' : '1';
                n = n / 2;
        }
        binary_str[x] = '\0';

        /*reverse the string*/
        length = x;
        for (x = 0, y = length - 1; x < y; x++, y--)
        {
                binary_str[x] ^= binary_str[y];
                binary_str[y] ^= binary_str[x];
                binary_str[x] ^= binary_str[y];
        }
        /*print the binary string*/
        for (x = 0; binary_str[x] != '\0'; x++)
                _putchar(binary_str[x]);

        free(binary_str);
        return (length);
}
/**
 * custom_specifier - prints custom conversion specifiers
 * @format: format string
 * @args: va_list object
 * Return: number of characters printed
 */
int custom_specifier(const char *format, va_list args)
{
        int chars_printed = 0;

        if (*format == 'b')
                chars_printed += print_binary(va_arg(args, unsigned int));
        else
                return (-1);

        return (chars_printed);
}
