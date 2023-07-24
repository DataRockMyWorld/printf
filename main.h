#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define BUFFER_SIZE 1024
int _printf(const char *format, ...);
int _putchar(char c);
int get_spec(char spec, va_list membs);
int print_char (int c);
int print_str(char *s);
int print_int(int num);
int _putchar(char c);

#endif
