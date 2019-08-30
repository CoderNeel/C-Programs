#include<stdio.h>
int main() 
{
	int day, year, month, day_rem;
	printf("Enter the number of days: ");
	scanf("%d", &day);
	year = day / 365;
	month = (day - year * 365)/30;
	day_rem = (day - year * 365 - month * 30);
	printf("Years: %d\nMonths: %d\nDays: %d", year, month, day_rem);
	return 0;
}
