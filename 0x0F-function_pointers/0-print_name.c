/**
 * print_name - fucntion that prints a name.
 * @name: name to be printed.
 * @f: function of void type.
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{

	if (f && name)
		f(name);

}
