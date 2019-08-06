#include "print.h"

char *f_c(va_list str, char *s)
{

  *s = (va_arg(str, int));
  return(s);

}

char *f_s(va_list str, char *s)
{
s = (va_arg(str, char *));
	  return(s);

}

int f_plus(va_list x)
{
if ((va_arg(x, int)) >= 0)
	return(1);
else
	return(0);

}

