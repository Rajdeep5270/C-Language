#include <stdio.h>

int main() {
    int n;
    printf("Enter size (e.g., 4): ");
    scanf("%d", &n);

    int num = 1;

    // Outer loop for diagonals
    for (int line = 0; line < n; line++) {
        // Print leading spaces for alignment
        for (int s = 0; s < line; s++) {
            printf("  ");
        }

        // Print each diagonal
        int row = 0;
        int col = line;
        while (col >= 0 && row < n) {
            printf("%d ", num++);
            row++;
            col--;
        }

        printf("\n");
    }

    return 0;
}
