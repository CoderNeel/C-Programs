#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter a number: ");
	scanf("%d", &a);
	printf("Enter another number: ");
	scanf("%d", &b);
	check(a, b);
	return 0;
}
int check(int a, int b)
{
	if(a > b) {
		printf("First number is greater than the second one");
	}
	else if(b > a) {
		printf("Second number is greater than the first one");
	}
	else {
		printf("Both of them are equal.");
	}
}
