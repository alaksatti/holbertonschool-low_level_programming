#include <stdio.h>
#include <stdlib.h>

int change(int argc, char *argv[])
{
        int cents;

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        cents = atoi(argv[1]);

        if (cents <= 0)
                printf("0\n");

        printf("%i", cents);
	return (0);
}
