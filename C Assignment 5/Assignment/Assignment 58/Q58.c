#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int mid = (n+1)/2;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==mid){
                printf("%d",j);
            }
            else if(j==mid){
                printf("%d",mid);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
