#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * _print_unsigned - print an unsigned int in base 10
 * @n: int to print
 * Return: 0
 */
int _print_unsigned(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += _print_unsigned(n / 10);
	_putchar((n % 10) + '0');
	count++;
	return (count);
}

/**
 * _print_octal - prints an int in base 8
 * @n: int to print
 * Return: 0
 */
int _print_octal(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += _print_octal(n / 8);
	_putchar((n % 8) + '0');
	count++;
	return (count);
}

/**
 * 
