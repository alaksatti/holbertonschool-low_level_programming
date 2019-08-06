#include "print.h"

int counter(int i, const char *f, s *spec)
{

	int len;
	int j;

	for (len = 0, i = i + 1; f[i] != '\0'; i++, len++ )
	{
		for(j = 0; *spec[j].c != '\0'; j++)
		{
			if(f[i] == *spec[j].c)
			{
				return(len);
			}
		}
	}

	return(-1);

}

