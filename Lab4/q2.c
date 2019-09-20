#include<stdio.h>
void swap(int *, int *);
int main()
{
	int n1,n2;
	printf("Enter a number: ");
	scanf("%d",&n1);
	printf("Enter another number: ");
	scanf("%d", &n2);
	printf("%d %d", n1, n2);
	swap(&n1, &n2);
	printf("\n%d %d", n1, n2);
}
void swap(int *n1, int *n2)
{
	*n1 = *n1 ^ *n2;
	*n2 = *n1 ^ *n2;
	*n1 = *n1 ^ *n2;
}
