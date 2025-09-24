#include <stdio.h>

int main() {
    int n;
    int i, j;
    printf("enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j < i) {
                printf("  ");
            } else {                
                printf("%d ",j-i+1);
            }
        }
        printf("\n");               
    }

    return 0;
}
