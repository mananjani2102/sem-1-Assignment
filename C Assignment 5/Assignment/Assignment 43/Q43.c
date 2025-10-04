#include <stdio.h>
int main() {
    int rows,cols;
    printf("Enter a rows: ");
    scanf("%d", &rows);
    printf("Enter a cols: ");
    scanf("%d", &cols);
     
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            if(j==1||i==1||i==rows||j==cols){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}