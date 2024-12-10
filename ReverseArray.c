#include <stdio.h>

int main() {
    int arr[7];
    printf("Enter 7 integers:\n");
    for (int i = 0; i < 7; i++) {
        printf("Enter a number at %d position : ",(i+1));
        scanf("%d", &arr[i]);
    }

    int start = 0, end = 6, temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    printf("Reversed array is:\n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}