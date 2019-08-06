#include "print.h"


int _printf(const char *format, ...)
{
	int length, i = 0, x, y, j, k;
	char *str;
	va_list args;

	s spec[] = {
		{"s", f_s},
		{"c", f_c},
		{"", NULL}
		};
	f flag[] = {
		{"+", f_plus},
		{"", NULL}
		};

	str = malloc(sizeof(char) * 1024);

	for(j = 0; j < 1024; j++)
		str[j] = '\0';

	va_start(args,format);


	while (format[i] != '\0')
	{
		if(format[i] == '%' && format[i + 1] =='%')
		{
			putchar('%');
			i = i + 2;
		}

		else if(format[i] == '%')
		{
			length = counter(i, format,spec);

			if(length == -1)
			{
				putchar(format[i]);
				i++;

			}

			if(length == 0)
			{
				for(x = 0; *spec[x].c != '\0'; x++)
				{

					if(format[i + 1] == *spec[x].c)
						str = spec[x].sp(args, str);
				}

				for(y = 0; str[y] != '\0'; y++)
				{
					putchar(str[y]);
				}

				i = i + (length + 2);
			}

			if (length == 1)
			{
				for(x = 0; *flag[x].c != '\0'; x++)
				{
					if (format[i + 1] == *flag[x].c)
						k = flag[x].fl(args);
				}

				if (k == 1)
					putchar('+');
				else
					putchar('-');

				printf("%d", va_arg(args,int));

				i = i + (length + 2);

			}
		}
		else
		{
			putchar(format[i]);
			i++;
		}
	}



	return(0);
}




