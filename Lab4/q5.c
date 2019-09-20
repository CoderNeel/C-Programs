#include<stdio.h>
int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	checkPrime(num);
	checkArmstrong(num);
}
int checkPrime(int num) {
	int i = 2, count = 0;
	while(i < num) {
		if(num % i == 0)
		{
			count++;
		}
		i++;
	}
	if(count == 0) {
		printf("Prime number");
	}
	else {
		printf("Not a prime number");
	}
}	
int checkArmstrong(int num) {
	int i = 1, res = 0, temp, x;
	temp = num;
	while(num > 0) {
		x = num%10;
		res = x*x*x + res;
		num = num/10;
	}
	if(res == temp) 
	{
		printf("Armstrong Number");
	}
}
