#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int counter = n*(n+1)/2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",counter);
            counter = counter - 1;
        }
        printf("\n");
    }
    return 0;
}