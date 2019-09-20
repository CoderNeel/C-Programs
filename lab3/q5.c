#include<stdio.h>
int main()
{
	int num, digit, rev = 0, temp;
	printf("Enter a number: ");
	scanf("%d", &num);
	temp = num;
	do {
		rev = rev*10;
		digit = num % 10;
		rev = rev + digit;
		num = num / 10;
	}while(num!=0);
	if(temp == rev)
	{
		printf("Palindrome");
	}
	else {
		printf("Not a palindrome number");
	}
}
