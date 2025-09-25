#include <stdio.h>
int main() {
    int n;
    int i, j;
    printf("enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for(j=1;j<=i;j++){
            printf("%c ",'A'+j-1);
        }
        if(i>1){
            for(int k=i-1;k>=1;k--){
                printf("%c ",'A'+k-1);
            }
        }
        printf("\n");
            }

    return 0;
}
