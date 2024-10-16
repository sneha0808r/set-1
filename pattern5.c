/*
11111
10001
10001
10001
11111
*/
#include<stdio.h>
void pattern5(int,int);

void main(){
    int row, col;
    printf("Enter no. of row : ");
    scanf("%d",&row);
    printf("Enter no. of col : ");
    scanf("%d",&col);

    pattern5(row,col);
}

void pattern5(int row,int col){
    int i,j;
    for(i=1;i<=row;i++){
        for(j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }
}