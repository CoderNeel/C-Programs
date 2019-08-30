#include<stdio.h>
int main() 
{
	int cel, kel, fahr;
	printf("Enter the temperature in Celsius: ");
	scanf("%d", &cel);
	kel = cel + 273;
	fahr = 9*cel/5 + 32;
	printf("Kelvin: %d\nFahrenheit: %d\n", kel, fahr);
	return 0;
}
