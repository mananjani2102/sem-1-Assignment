#include<stdio.h>
int main(){
int n;
printf("enter a number :");
scanf("%d",&n);
for(int i=n;i>=1;i--){
    for(int s=0;s<n-i;s++){
         printf(" ");
    }
    for(int j=1;j<=i;j++){
        printf("*");
 }
 
    printf("\n");
}
    return 0;
}