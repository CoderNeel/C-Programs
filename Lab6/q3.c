#include<stdio.h>
int main() {
        int arr[5];
        int i, j;
        for(i=0;i<5;i++)
        {
                scanf("%d",&arr[i]);
        }
        printf("What'd you like to search? ");
        scanf("%d", &j);
        for(i=0;i<5;i++) {
                if(arr[i] == j) {
                        printf("%d Success", i);
                }
        }
}
