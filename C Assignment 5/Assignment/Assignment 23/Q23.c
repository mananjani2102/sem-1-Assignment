#include <stdio.h>
int main() {
    int n;
    int i, j;
    printf("enter a number: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (j < i) {
                printf("  ");
            } else {                
                printf("%c ", 'A' + j-i);
            }
        }
        printf("\n");               
    }

    return 0;
}
