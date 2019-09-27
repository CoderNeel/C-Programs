#include<stdio.h>
int main()
{
	char s[35];
	int i = 0;
	printf("Enter a string: ");
	scanf("%s",&s[35]);
	for(i=0;i<35;i++)
	{
		s[i] = s[i] + 32;
	}
	printf("%d", s[35]);
}
