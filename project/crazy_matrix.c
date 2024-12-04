#include <stdio.h>

int main() {
    int n = 3; // Size of the matrix
    int arr[3][3];
    int value = 9; // Starting value

    // Fill the array with the pattern
    for (int i = 2; i >= 0; i--) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = value--;
        }
    }

    // Print the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
