#include<stdio.h>
int main(){
int n;
printf("enter a number :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int s=1;s<=n-i;s++){
        printf("  ");
    }
    for(int j=0;j<i;j++){
        printf("%c ",'A'+j);
    }
    printf("\n");
}
    return 0;
}