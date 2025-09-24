#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int s = 0; s < i * 2; s++) {
            printf(" ");
        }
        int limit = (n * 2 - 1) - (i * 2);  
        for (int j = 0; j < limit; j++) {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }
    return 0;
}