#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/* _printf declaration */
int _printf(const char *format, ...);

/* Handler functions */
int pchar(va_list args);
int pstring(va_list args);
int pint(va_list args);
int puint(va_list args);
int poct(va_list args);
int phex_lower(va_list args);
int phex_upper(va_list args);
int pptr(va_list args);
int pfloat(va_list args);
int percent(va_list args);

/* Struct mapping format specifiers to handlers */
typedef struct specchar
{
  char symbol;
  int (*handler)(va_list args);
} char_check;

#endif
