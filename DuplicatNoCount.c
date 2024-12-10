#include <stdio.h>

int main() {
    int array[] = {4, 5, 6, 7, 4, 5, 8, 9, 6};
    int size = sizeof(array) / sizeof(array[0]);
    int visited[size];
    int duplicateCount = 0;

    for (int i = 0; i < size; i++) {
        visited[i] = 0;
    }

    for (int i = 0; i < size; i++) {
        if (visited[i] == 0) {
            for (int j = i + 1; j < size; j++) {
                if (array[i] == array[j]) {
                    visited[j] = 1;
                    duplicateCount++;
                }
            }
        }
    }

    printf("Total number of duplicate numbers: %d\n", duplicateCount);

    return 0;
}