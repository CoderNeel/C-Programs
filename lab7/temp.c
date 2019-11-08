#include<stdio.h>
#include<stdlib.h>
struct temp {
	int a, b, c;
	char name[20];
};
int main() {
	printf("%d", sizeof(int));
	printf("%d", sizeof(struct temp));
	return 0;
}
