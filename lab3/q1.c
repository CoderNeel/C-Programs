#include<stdio.h>
int main()
{
	int i, j=0;
	int a, b;
	printf("Enter a number");
	scanf("%d", &a);
	printf("Enter another number");
	scanf("%d", &b);
	for(i=0;i<b;i+=1) {
		j = j + a;
	}
	printf("%d", j);
}
