#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                printf("%d",i);
            }
            else if(i+j==n+1){
                printf("%d",n-i+1);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
