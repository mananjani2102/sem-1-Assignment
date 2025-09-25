#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows (half diamond): ");
    scanf("%d", &n);

 
    for (int i = 1; i <= n; i++) {
      
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
      
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }
       
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }
    
    for (int i = n - 1; i >= 1; i--) {
     
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
    
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);
        }      
        for (int j = i - 2; j >= 0; j--) {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
