#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <stdint.h>
#include <stdint.h>


#define BUFFER_SIZE 1024

int _printf(const char *format, ...);
int output_c(char c);
int get_spec(char spec, va_list membs);
int print_char (int c);
int print_str(char *s);
int print_int(int num);
int print_bin(unsigned int n);
int print_u(unsigned int n);
int print_o(unsigned int n);
int print_x(unsigned int n);
int print_capx(unsigned int n);
int print_capstr(char *c);
int print_reverse(char *s);
void print_storage(char storage[], int *index);
#endif
