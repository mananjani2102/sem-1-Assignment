#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1 || i == n) {  
            for (int j = 1; j < 2 * n; j++) {
                printf("*");
            }
        } else {                
            printf("*");
            for (int k = 1; k < 2 * n - 2; k++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
