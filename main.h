#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int printf_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

int _buffer_(char c, char *buffer, int index);
int _s_buffer_(char *format, char *buf, int index);
int print_buf(char *buffer, int index);
int _i_buffer_(int num, char *buffer, int index);
int print_13(char *format, char *buffer, int index);

#endif
