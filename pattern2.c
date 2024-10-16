#include<stdio.h>
void pattern2(int);

void main(){
    int col;
    printf("Enter no. of col : ");
    scanf("%d",&col);

    pattern2(col);
}
void pattern2(int col){
    int i,j;
    for(i=1;i<=col;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=col;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}