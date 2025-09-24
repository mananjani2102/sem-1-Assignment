#include <stdio.h>
int main() {
    int n;
    int i, j;
    printf("enter a number: ");
    scanf("%d", &n);

   for(i=n;i>=1;i--){
    for(j=n;j > i;j--){
        printf("  ");
    }
    for(int k=1;k<=2*i-1;k++){
        printf("%d ",k);
    }
    printf("\n");
   }

    return 0;
}
