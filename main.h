#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _puts(char *str);
int _printf(const char *format, ...);
int _strlen(char *s);
char *_itoa(int n, char *str);
int custom_specifier(const char *format, va_list args);
int print_binary(unsigned int n);

#endif /* MAIN_H */
