#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * op_add - Function for sum
 * @a: first value
 * @b: Second value.
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - Function for sub
  * @a: first value
  * @b: Second value.
  * Return: the sub of a and b
  */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - Function for op_mul
  * @a: first value
  * @b: Second value.
  * Return: the mul of a and b
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - Function for div
  * @a: first value
  * @b: Second value.
  *
  * Return: the div of a and b
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  * op_mod - A function that returns the mod
  * @a: first value
  * @b: second value
  *
  * Return: the mod between a and b
  */
int op_mod(int a, int b)
{
	return (a % b);
}
