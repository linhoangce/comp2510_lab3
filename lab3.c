//
// Created by linho on 2024-09-19.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ARRAY_SIZE 10 // Adjusted to match the problem constraints

void rotateArray(int arr[10][10], int n, int rows, int cols) {
    // Initialize a temporary array to store the values of arr[][]
    int temp[ARRAY_SIZE][ARRAY_SIZE] = {0};

    n = (n / 90) % 4;

    for (int i = 0; i < ARRAY_SIZE; i++) {
        for (int j = 0; j < ARRAY_SIZE; j++) {
            temp[i][j] = arr[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = temp[rows - n - j][i];
        }
    }

}

/*********************************/
// Do NOT touch anything below this line
    int main(int argc, char **argv){
    int i, j, n;
    int arr[ARRAY_SIZE][ARRAY_SIZE] = {0}; // Initialize the array to zero

    // Sample 5x5 input array
    int sample[5][5] = {
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2},
        {2, 2, 2, 2, 2},
        {3, 3, 3, 3, 3}
    };

    // Copy sample input to arr
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            arr[i][j] = sample[i][j];
        }
    }

    // Set the rotation angle
    n = 90; // Change this to test different angles

    printf("========INPUT=======\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    rotateArray(arr, n, 5, 5);

    printf("=======OUTPUT=======\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
