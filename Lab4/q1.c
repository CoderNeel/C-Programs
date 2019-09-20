#include<stdio.h>
int main()
{
        int n;
        printf("Enter a number: ");
        scanf("%d",&n);
        printf("Factorial = %d",fact(n));
        return 0;
}

int fact(int n)
{
	if(n>=1)
	{
		return n*fact(n-1);
	}
	else {
		return 1;
	}
}
