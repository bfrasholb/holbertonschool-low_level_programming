#include "variadic_functions.h"

/**
*print_all-prints anything
*@format:a list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
int j, i = 0;
char sep[3] = {'\0', '\0', '\0'};
va_list args;

printer_t ops[] = {
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{0, NULL}
};

va_start(args, format);
while (format && format[i])
{
j = 0;
while (ops[j].symbol)
{
if (format[i] == ops[j].symbol)
{
printf("%s", sep);
ops[j].func(args);
sep[0] = ',';
sep[1] = ' ';
break;
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}

/**
*print_char-prints a character
*@args:arguments
*/

void print_char(va_list args)
{
char c = va_arg(args, int);

printf("%c", (char)c);
}

/**
*print_int-prints an integer
*@args:arguments
*/

void print_int(va_list args)
{
int n = va_arg(args, int);

printf("%d", n);
}

/**
*print_float-prints a double
*@args:arguments
*/

void print_float(va_list args)
{
double f = va_arg(args, double);
printf("%f", f);
}

/**
*print_string-prints a string or (nil) if string == NULL
*@args:arguments
*/

void print_string(va_list args)
{
char *s = va_arg(args, char *);

if (s == NULL)
{
s = "(nil)";
}
printf("%s", s);
}
