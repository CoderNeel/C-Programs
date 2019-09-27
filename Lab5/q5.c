#include<stdio.h>
int main()
{
	int arr[5],i=0,j=0, *p[5], a2[5];
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		p[i] = &arr[i];
	}
	for(j=0;j<5;j++)
	{
		a2[j] = *p[j];
	}
	for(i=0;i<5;i++)
	{
		printf("Array 1:\n%d\n",arr[i]);
	}
	for(j=0;j<5;j++)
	{
		printf("Array 2: \n%d\n", a2[j]);
	}
	
}
