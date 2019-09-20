#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	printf("%d %d", a, b);
	return 0;
}
int swap(int a, int b)
{
	a = a + b;
	b = a - b;
	a = a - b;
	return a, b;
}
