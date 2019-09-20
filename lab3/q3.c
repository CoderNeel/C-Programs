#include<stdio.h>
int main()
{
	int num, digit, rev = 0;
	printf("Enter a number: ");
	scanf("%d", &num);
	do {
		rev = rev*10;
		digit = num % 10;
		rev = rev + digit;
		num = num / 10;
	}while(num!=0);
	printf("%d", rev);
}
