#include <stdio.h>
int main() {
    int n;
    int i, j;
    printf("enter a number: ");
    scanf("%d", &n);
   for(i=n;i>=1;i--){
    for(j=n-i;j>=1;j--){
        printf(" ");
    }
    for(int k=1;k<2*i;k++){
        printf("*");
    }
    printf("\n");
   }
    return 0;
}
