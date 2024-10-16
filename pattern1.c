/*
    *****
   *****
  *****
 *****
*****
*/
#include<stdio.h>
void pattern1(int,int);

void main(){
    int row, col;
    printf("Enter no. of row : ");
    scanf("%d",&row);
    printf("Enter no. of col : ");
    scanf("%d",&col);

    pattern1(row,col);
}
void pattern1(int row, int col){
    int i,j,k;
    for(i=0;i<row;i++){
        for(j=row-1;j>i;j--){
            printf(" ");
        }
        for(k=0;k<col;k++){
            printf("*");
        }
        printf("\n");
    }

}