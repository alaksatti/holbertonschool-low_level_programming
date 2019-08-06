#ifndef PRINT_H
#define PRINT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


typedef struct s
{
	char *c;
	char *(*sp)(va_list, char *);

}s;

typedef struct f
{
	char *c;
	int (*fl)(va_list);
}f;

int _printf(const char *format, ...);
int counter(int i, const char *f, s *spec);
char *f_s(va_list str, char *s);
char *f_c(va_list str, char *s);
int f_plus(va_list);


#endif
