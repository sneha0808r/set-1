#include<stdio.h>
void main(){
    int i,j,a[]={1,2,3,4,5,6,2,3,4};
    for(i=0;i<9;i++){
        int f = 0;
        for(j=0;j<9;j++){
            if(i==j){
                continue;
            }
            else if(a[i]==a[j]){
                f=1;
                break;
            }
        }
        if(f == 0){
            printf("%d   ",a[i]);
        }
    }
}