#include<stdio.h>
int main() {
	int a,b,c,r1,r2;
	printf("Enter the Coefficient of x^2");
	scanf("%d", &a);
	printf("Enter the coefficient of x");
	scanf("%d", &b);
	printf("Enter the constant term: ");
	scanf("%d", &c);
	r1 = - b + (b**2 - 4*a*c)**(1/2);
	r2 = - b - (b**2 - 4*a*c)**(1/2);
	printf("Root 1: %d\nRoot 2: %d",r1,r2);
	return 0;
}
