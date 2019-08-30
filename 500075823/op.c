#include<stdio.h>
int main() 
{
	int a =20, b = 10, sum, sub, mul, div;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	printf("The sum of %d and %d = %d\nThe difference of %d and %d = %d\nThe product of %d and %d = %d\nThe division of %d by %d = %d",a,b,sum,a,b,sub,a,b,mul,a,b,div);
	return 0;
}
