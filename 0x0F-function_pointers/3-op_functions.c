#include "3-calc.h"

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);
/**
 * op_add - return the addition of two nums
 * @x: the first input to add
 * @y: the 2nd input to add
 * Return: the res of the addition
 */
int op_add(int x, int y)
{
	return (x + y);
}
/**
 * op_sub - subtracts two num
 * @x: the first input
 * @y: the 2nd num
 * Return: the result of the subtraction
 */
int op_sub(int x, int y)
{
	return (x - y);
}
/**
 * op_mul - multiples two numbers
 * @x: 1st num
 * @y: 2nd num
 * Return: the result of the multiplication
 */
int op_mul(int x, int y)
{
	return (x * y);
}
/**
 * op_div - division of twon nums
 * @x: 1st num
 * @y: 2nd num
 * Return: the res of the division
 */
int op_div(int x, int y)
{
	return (x / y);
}
/**
 * op_mod - a function that returns the remainder
 * @x: 1st num
 * @y: 2nd num
 * Return: the remainder
 */
int op_mod(int x, int y)
{
	return (x % y);
}
