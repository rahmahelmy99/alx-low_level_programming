#include "3-calc.h"

/**
 * main - main program that runs the whole function.
 *@argc: input number of parameters.
 *@argv: input the vector.
 * Return: 0 if success
*/
int main(int argc, char **argv)
{
	int (*func_op)(int, int);
	int a, b;

	if (argc != 4)
	{
		printf("Eror\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	func_op = get_op_func(argv[2]);
	if (!func_op)
	{
		printf("Eror\n");
		exit(99);
	}
	if (!b && argv[2][0] == '/' || argv[2][0] == '%')
	{
		printf("Eror\n");
		exit(100);
	}
	printf("%d\n", func_op(a, b));
	return (0);
}
