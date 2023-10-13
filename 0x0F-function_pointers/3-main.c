#include "3-calc.h"
/**
 * main - main function
 *
 * @argc: count input
 * @argv: pointer argument
 *
 * Return: 0 success
 *
 */
int main(int argc, char *argv[])
{
	char *operator;
	int num1, num2;

	/** if argument count isn't correct */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* set the input of argument */

	num1 = atoi(argv[1]); /* => 1st input number */
	operator = (argv[2]); /* => input oprator */
	num2 = atoi(argv[3]); /* => 2nd input number */

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	/* check if the operator deosn't exist in the operator list */
	{
		printf("Error\n");
		exit(99);
	}
	/* try to perform modulus or divide by 0 */
	if ((*operator == '/' && num2 == 0) || (*operator == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	/* get the results of the operations */
	printf("%d\n", get_op_func(operator)(num1, num2));
	return (0);
}
