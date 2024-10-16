#include<stdio.h>
void pattern3(int);

void main(){
    int row;
    printf("Enter no. of row : ");
    scanf("%d",&row);

    pattern3(row);
}
void pattern3(int row){
    
    int i,j,k;
    for(i=0;i<row;i++){
        for(j=row-1;j>i;j--){
            printf(" ");
        }
        for(k=0;k<i;k++){
            printf("*");
        }
        printf("\n");
    }
}