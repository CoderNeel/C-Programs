#include<stdio.h>
int main() {
	int p, r, t, si;
	printf("Enter Principal, Rate and Time: ");
	scanf("%d%d%d", &p ,&r ,&t);
	si = (p * r * t) / 100;
	printf("Simple Interest = %d", si);
	return 0;
}
