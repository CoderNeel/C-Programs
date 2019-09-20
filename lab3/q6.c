#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	int i = 1;
	for(i=1;i<=num;i++)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			printf("\n%d",i);
		}
	}
	return 0;
}
