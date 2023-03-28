#include <unistd.h>
#include "main.h"
/**
 * _putchar - print char c to stdout
 * @c: char to print
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
