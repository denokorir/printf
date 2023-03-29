#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int print_percent(va_list);
int print_integer(va_list);

#endif /* MAIN_H */
