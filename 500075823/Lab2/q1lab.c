#include<stdio.h>
int main() {
	int num1, num2, num3;
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
        scanf("%d", &num2);
	printf("Enter num3: ");
        scanf("%d", &num3);
	if(num1 > num2 && num1 > num3) {
		printf("Number 1 is the greatest.");
	}		
	else if(num2 > num1 && num2 > num3) {
		printf("Number 2 is the greatest.");
	}
	else if(num3 > num1 && num3 > num2) {
		printf("Number 3 is the greatest.");
	}
	else if(num1 == num2 || num2 == num3 || num1 == num3) {
		printf("Please enter unequal numbers");
	}
	return 0;
}
