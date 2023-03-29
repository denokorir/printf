#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int parser(const char *format, conver_t f_list[], va_list arg_list);
int _putchar(va_list);
int _puts(va_list);
int _puts(char *str);
int _printf(const char *format, ...);
int print_percent(va_list);
int print_integer(va_list);

#endif /* MAIN_H */
