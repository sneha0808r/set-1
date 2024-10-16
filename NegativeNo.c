#include<stdio.h>

int main() {
    int a[] = {4, -10, 3, -8, 1, -15};  
    int count = 0; 
    int n = sizeof(a) / sizeof(a[0]);  
    int i;

    
    for (i = 0; i < n; i++) {
        if (a[i] < 0) {
            count++;  
        }
    }

    printf("Total number of negative numbers: %d\n", count);

    return 0;
}
