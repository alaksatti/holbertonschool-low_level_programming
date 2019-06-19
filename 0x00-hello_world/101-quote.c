#include <unistd.h>
/**
 *main - prints a line with new line to std error.
 *Description: prints and that piece of art is useful" by Dora Korpar.
 *Return: 1 if successfully completed.
 */

int main(void)
{
	 const char *msg[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, *msg, sizeof(msg)-1);

	return (1);
}
