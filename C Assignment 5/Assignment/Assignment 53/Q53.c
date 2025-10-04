#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int counter = 1;
    for(int i=1;i<=n;i++){

        for(int k=1;k<=n - i;k++){
            printf("   ");
        }

        for(int j=1;j<=i*2-1;j++){
            printf("%2d ",counter);
            counter++;
        }
        printf("\n");
    }
    return 0;
}