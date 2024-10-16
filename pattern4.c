/*
1234
4321
1234
4321
1234
*/
#include<stdio.h>
void pattern4(int,int);

void main(){
    int row, col;
    printf("Enter no. of row : ");
    scanf("%d",&row);
    printf("Enter no. of col : ");
    scanf("%d",&col);

    pattern4(row,col);
}

void pattern4(int row,int col){
    int i,j;
    for(i=1;i<=row;i++){
        if(i%2!=0){
            for(j=1;j<=col;j++){
                printf("%d",j);
            }
        }
        else{
            for(j=col;j>=1;j--){
                printf("%d",j);
            }
        }
        printf("\n");
    }
}