/*
12345
23455
34555
45555
55555
*/

#include<stdio.h>
void pattern6(int);

void main(){
    int row;
    printf("Enter no. of row : ");
    scanf("%d",&row);

    pattern6(row);
}

void pattern6(int row){
    int i,j;
    for(i=1;i<=row;i++){
        for(j=1;j<=row;j++){
            if(j<=row-i){
                printf("%d",i+j-1);
            }
            else{
                printf("%d",row);
            }
        }
        printf("\n");
    }
}
