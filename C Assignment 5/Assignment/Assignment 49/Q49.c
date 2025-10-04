#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    char counter = 'A';
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c ",counter);
            counter = counter + 1;
        }
        printf("\n");
    }
    return 0;
}