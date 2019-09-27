#include<stdio.h>
int sum(int arr[], int n) {
	if(n <= 0) {
		return 0;
	}
	else {
		return sum(arr, n-1)+arr[n-1];
	}
}
int main() {
	int arr[5], i=0;
	for(i=0;i<=4;i++)
	{
		scanf("%d", &arr[i]);
	} 
	printf("%d", sum(arr, i));
}
