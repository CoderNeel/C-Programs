#include<stdio.h>
int main() {
	int a1[5], i = 1, j = 1, iPos, ele;
	for(i=0;i<5;i++)
	{
		scanf("%d", &a1[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a1[i]);
	}
	printf("Enter the ith position: ");
	scanf("%d", &iPos);
	printf("Enter the element: ");
	scanf("%d", &ele);
	a1[iPos] = ele;
	for(i=0;i<5;i++)
	{
		printf("%d", a1[i]);
	}
}
