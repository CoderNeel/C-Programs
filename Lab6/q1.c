#include<stdio.h>
int main() {
	int i=0, j=0, m=0, n=0, sum = 0;
	scanf("%d%d", &m, &n);
	int arr[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	i=0;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			sum = sum + arr[i][j];
		}
		printf("Sum of Row %d is %d", i, sum);
		sum = 0;
	}
	sum = 0;
	for(i=0;i<n;i++) {
		for(j=0;j<m;j++) {
			sum = sum + arr[j][i];
		}
		printf("Sum of Column %d is %d", i, sum);
		sum = 0;
	}
}
