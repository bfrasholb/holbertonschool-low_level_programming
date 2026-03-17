#include "main.h"

/* Print a single character */
int pchar(va_list args)
{
  char c = va_arg(args, int);
  return write(1, &c, 1);
}

/* Print a string */
int pstring(va_list args)
{
  char *str = va_arg(args, char *);
  int len = 0;

  if (!str)
    str = "(null)";

  while (str[len])
    len++;
  write(1, str, len);
  return len;
}

/* Print signed integer */
int pint(va_list args)
{
  int num = va_arg(args, int);
  char buf[20];
  int i = 0, len = 0;
  unsigned int n;

  if (num < 0)
    {
      write(1, "-", 1);
      len++;
      n = -num;
    }
  else
    n = num;

  /* Convert number to string in reverse */
  do {
    buf[i++] = (n % 10) + '0';
    n /= 10;
  } while (n);

  /* Print in correct order */
  while (--i >= 0)
    {
      write(1, &buf[i], 1);
      len++;
    }
  return len;
}

/* Print unsigned integer */
int puint(va_list args)
{
  unsigned int num = va_arg(args, unsigned int);
  char buf[20];
  int i = 0, len = 0;

  do {
    buf[i++] = (num % 10) + '0';
    num /= 10;
  } while (num);

  while (--i >= 0)
    {
      write(1, &buf[i], 1);
      len++;
    }
  return len;
}

/* Print unsigned integer as octal */
int poct(va_list args)
{
  unsigned int num = va_arg(args, unsigned int);
  char buf[20];
  int i = 0, len = 0;

  do {
    buf[i++] = (num % 8) + '0';
    num /= 8;
  } while (num);

  while (--i >= 0)
    {
      write(1, &buf[i], 1);
      len++;
    }
  return len;
}

/* Print unsigned integer as hex lowercase */
int phex_lower(va_list args)
{
  unsigned int num = va_arg(args, unsigned int);
  char buf[20];
  int i = 0, len = 0;
  char hex[] = "0123456789abcdef";

  do {
    buf[i++] = hex[num % 16];
    num /= 16;
  } while (num);

  while (--i >= 0)
    {
      write(1, &buf[i], 1);
      len++;
    }
  return len;
}

/* Print unsigned integer as hex uppercase */
int phex_upper(va_list args)
{
  unsigned int num = va_arg(args, unsigned int);
  char buf[20];
  int i = 0, len = 0;
  char hex[] = "0123456789ABCDEF";

  do {
    buf[i++] = hex[num % 16];
    num /= 16;
  } while (num);

  while (--i >= 0)
    {
      write(1, &buf[i], 1);
      len++;
    }
  return len;
}

/* Print pointer */
int pptr(va_list args)
{
  void *ptr = va_arg(args, void *);
  unsigned long addr = (unsigned long)ptr;
  char buf[20];
  int i = 0, len = 0;
  char hex[] = "0123456789abcdef";

  write(1, "0x", 2);
  len += 2;

  do {
    buf[i++] = hex[addr % 16];
    addr /= 16;
  } while (addr);

  while (--i >= 0)
    {
      write(1, &buf[i], 1);
      len++;
    }
  return len;
}

/* Print double / float */
int pfloat(va_list args)
{
  double f = va_arg(args, double);
  char buf[64];
  int len;

  /* Use snprintf to convert double to string */
  len = snprintf(buf, sizeof(buf), "%f", f);
  write(1, buf, len);
  return len;
}

/* Print literal % */
int percent(va_list args)
{
  (void)args;
  return write(1, "%", 1);
}
/**
int percent(va_list args)
{
  (void)args;
  return write(1, "%", 1);
}
*/
