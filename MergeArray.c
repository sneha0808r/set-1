// 3.	Write a program to merge two sorted arrays to a third array.
#include <stdio.h>

int main() {
    int arr1[] = {1,3,5,7,9};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {2,4,6,8,10};
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    int mergedArr[size1 + size2];
    int i=0, j=0, k=0;
    
    while (i < size1 && j < size2) {
        if (arr1[i] <= arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        mergedArr[k++] = arr1[i++];
    }
    while (j < size2) {
        mergedArr[k++] = arr2[j++];
    }
    printf("The merged sorted array is:\n");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");
    return 0;
}
