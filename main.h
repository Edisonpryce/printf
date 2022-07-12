#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _strlen(char *s);
int _printf(const char *format, ...);
int __putchar(char c);
int get_match_func(const char *, va_list, st_fmt st_format[]);
int func_digit(va_list);
int func_binary_convert(va_list);
int func_octal_convert(va_list);
int func_hex_Upcase_convert(va_list);
int func_hex_Lowcase_convert(va_list);
int binary_oct_hex_convert(unsigned int, int, int);
int func_unsig_int(va_list list);
int func_stringUppercase(va_list list);
int func_revstr(va_list list);
int func_rot13(va_list);
int num_function(va_list list);

#endif
