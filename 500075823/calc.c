#include<stdio.h>
int main() {
	int num1, num2, res, op;
	printf("Enter two numbers");
	scanf("%d%d", &num1, &num2);
	printf("Choose an Operator:\n1: +\n2: -\n3: /\n4: *\n");
	scanf("%d",&op);
	if(op == 1) {
		res = num1+num2;
	}
	if(op == 2) {
		res = num1-num2;
	}
	if(op == 3) {
		res = num1/num2;
	}
	if(op == 4) {
		res = num1*num2;
	}
	printf("%d", res);
	return 0;
}
