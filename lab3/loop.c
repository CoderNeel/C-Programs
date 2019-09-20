#include<stdio.h>
int main() {
	int i, j, k;
	scanf("%d",&k);
	for(i=1;i<=2*k-1;i++)
	{
		for(j=1;j<=k-i;j++)
		{
			printf("_");
			
		}
		for(int l=1;l<=2*i-1;l++)
		{
			printf("*");
		}
		printf("\n");
	}
}
