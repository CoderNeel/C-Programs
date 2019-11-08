#include<stdio.h>
#include<stdlib.h>
struct temp {
	int a,b,c;
};
int main() {
	int n;
	printf("How many no.s?");
	scanf("%d", &n);
	struct temp *p = (struct temp *) malloc(sizeof(struct temp)*n);
	scanf("%d", &p-> a);
	printf("%d\n%d",sizeof(struct temp), &p);
}
