#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - returns the sum of a and b
 * @a: num1
 * @b: num2
 * Return: Result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b.
 * @a: num1
 * @b: num2
 * Return: Result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - product of a and b.
 * @a: num1
 * @b: num2
 * Return: Result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: num1
 * @b: num2
 * Return: Result
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b.
 * @a: num1
 * @b: num2
 * Return: Result
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
