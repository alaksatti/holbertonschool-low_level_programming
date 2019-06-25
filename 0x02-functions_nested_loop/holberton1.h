#ifndef _HOLBERTON_H
#define _HOLBERTON_H_
#endif _HOLBERTON_H_

void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);











int _putchar(char c);

/**
 * print_alphabet - prints the alphabet in lowercase.
 * Description: prints the alphabet in lowercase.
 * Return: nothing.
 */
void print_alphabet(void)
{
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	_putchar('\n');
}

/**
* print_alphabet - prints the alphabet in lowercase.
* Description: prints the alphabet in lowercase 10x.
* Return: nothing.
*/

void print_alphabet_x10(void)
{
	for (i = 0; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}

}


/**
 * int_islower - checks for lowercase character.
 * @c: the character to be checked.
 * Return: 1 if c is lowercase otherwise return 0.
 */
int _islower(int c)
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * int_islower - checks for lowercase character.
 * @c: the character to be checked.
 * Return: 1 if c is a letter; otherwise return 0.
 */

int _isalpha(int c)
{
	int c;

	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	else
		return (1);
}

/**
 * int print_sign(int n) - checks for lowercase character.
 * @n: the number to be checked.
 * Return: 1 if n > 0; 0 if n = 0 letter; -1 if n<0.
 */
int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if else (n == 0)
	{
		_putchar('0' + n);
		return (0);
	}

	else
	{
		_putchar('-');
		return(-1);
	}
}

/**
 * int _abs(int r) - Compute the absolute value of an integer.
 * @r: int to be checked.
 * Return: the absolute value.
 */

int _abs(int r)
{
	int r;

	if (r >= 0)
		return (r);
        else
		return (-r);
}

/**
 * int print_last_digit(int num) - prints the last digit of a number.
 * @num: number to be evaluated.
 * Return: the last value of a digit.
 */

int print_last_digit(int num)
{
	int num, LD;

	LD = num % 10;

	if (LD < 0)
		return (-LD);
	else
		return (LD);
}

/**
 * void jack_bauer(void) - prints every minute of the day of Jack Bauer.
 * Return: nothing.
 */

void jack_bauer(void)
{
	int a, b;

	for (a = 0; a <= 23; a++)
		for (b = 0; b <= 59; b++)
		{
			_putchar('0' + a / 10);
			_putchar('0' + a % 10);
			_putchar(58);
			_putchar('0' + b / 10);
			_putchar('0' + b % 10);
			_putchar('\n');
		}

}

/**
 * void times_table(void) - prints 9 times table.
 * Return: nothing.
 */

void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = (i * j);
			_putchar(p + '0');
			if (j != 9)
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
	return (0);
}

/**
 * int add(int x, int y) - adds two integers and returns the result.
 * @x: & @y: two integers to be added.
 *Return: Result.
 */

int add(int x, int y)
{
	int z = x + y;

	return (z);

}

/**
 * void print_to_98(int n)- prints all natural numbers from n to 99 with newline.
 *@n: number to begin sequence of natural numbers.
 * Return: nothing.
 */

void print_to_98(int n)
{
	if (n > 98)
		for (i = n; i >= 98); --i)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
	if (n <= 98)
		for (i = n; i <= 98; i++)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
}
