#include<stdio.h>
int main(){
int n;
printf("enter a number :");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=0;j<n-i+1;j++){
        printf("%c ",'A'+j);
 }
    printf("\n");
}
    return 0;
}