#include<stdio.h>
int main()
{
	int year;
	printf("Enter year: ");
	scanf("%d", &year);
	if(year % 4 == 0) {
		if(year % 100 == 0 && year % 400 == 0)
		{
			printf("Leap Year");
		}
		if(year % 100 == 0 && year % 400 != 0)
		{
			printf("Not a leap year.");
		}
		else {
			printf("Leap Year");
		}	
	}
	else {
		printf("Not a Leap Year");
	}
}
