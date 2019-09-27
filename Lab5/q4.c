#include<stdio.h>
int main() {
	int arr[5], i=0, j=0, max, min;
	for(i=0;i<5;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(j=1;j<=5;j++)
	{
		if(arr[j-1]<arr[j])
		{
			max = arr[j];
			min = arr[j-1];
		}
	}
	printf("%d %d", max, min);
}
