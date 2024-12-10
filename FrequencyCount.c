// 8.	Write a program to count frequency of each number in an array.
#include <stdio.h>

int main() {
    int array[] = {4, 5, 6, 7, 4, 5, 8, 9, 6};
    int size = sizeof(array) / sizeof(array[0]);
    int visited[size];

    // Initialize visited array to 0
    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }

    // Count frequency of each number
    for (int i = 0; i < size; i++) {
        if (visited[i] == 0) {
            int count = 1;
            for (int j = i + 1; j < size; j++) {
                if (array[i] == array[j]) {
                    count++;
                    visited[j] = 1; // Mark as visited
                }
            }
            printf("Number %d appears %d times\n", array[i], count);
        }
    }

    return 0;
}
