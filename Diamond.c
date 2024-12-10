// 13. Diamond
#include<stdio.h>
void Diamond(int);

void main() {
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    Diamond(rows);
}
void Diamond(int rows){
    int i, j, k;
    for (i=1; i<=rows; i++){
        for (j=1; j<=rows-i; j++){
            printf(" ");
        }
        for (k=1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");
    }
    for (i=rows-1; i>=1; i--){
        for (j=1; j<=rows-i; j++){
            printf(" ");
        }
        for (k=1; k<=(2*i-1); k++){
            printf("*");
        }
        printf("\n");
    }
}
