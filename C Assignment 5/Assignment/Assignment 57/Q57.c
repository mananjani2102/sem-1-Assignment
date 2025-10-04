#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int top = i - 1;
            int left = j - 1;
            int bottom = n - i;
            int right = n - j;

            int min_dist = top;
            if (left < min_dist) min_dist = left;
            if (bottom < min_dist) min_dist = bottom;
            if (right < min_dist) min_dist = right;

            printf("%d", min_dist + 1);
        }
        printf("\n");
    }

    return 0;
}
