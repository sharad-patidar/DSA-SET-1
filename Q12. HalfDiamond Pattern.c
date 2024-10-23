#include <stdio.h>
void HalfDiamond(int rows) {
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    HalfDiamond(rows);
    return 0;
}