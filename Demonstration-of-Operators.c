#include <stdio.h>
int main()
{
int a = 10, b = 5;
int x;
printf("Arithmetic Operators:\n");
printf("a + b = %d\n", a + b);
printf("a - b = %d\n", a - b);
printf("a * b = %d\n", a * b);
printf("a / b = %d\n", a / b);
printf("a %% b = %d\n", a % b);
printf("\nRelational Operators:\n");
printf("a > b = %d\n", a > b);
printf("a < b = %d\n", a < b);
printf("a == b = %d\n", a == b);
printf("a != b = %d\n", a != b);
printf("\nLogical Operators:\n");
printf("(a > b && b > 0) = %d\n", a > b && b > 0);
printf("(a < b || b > 0) = %d\n", a < b || b > 0);
printf("!(a > b) = %d\n", !(a > b));
printf("\nAssignment Operator:\n");
x = a;

x += 5;
printf("x = %d\n", x);
printf("\nUnary Operators:\n");
printf("++a = %d\n", ++a);
printf("--b = %d\n", --b);
printf("\nConditional Operator:\n");
printf("Largest = %d\n", (a > b) ? a : b);
printf("\nBitwise Operators:\n");
printf("a & b = %d\n", a & b);
printf("a | b = %d\n", a | b);
printf("a ^ b = %d\n", a ^ b);
printf("\nComma Operator:\n");
x = (a = 2, b = 3, a + b);
printf("Result = %d\n", x);
return 0;
}