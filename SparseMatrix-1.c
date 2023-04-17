#define _CRE_SECURE_NO_WARNING
#include <stdio.h>
#define ROWS 3
#define COLS 3

void printMatrix(int A[ROWS][COLS]);
void transeposeMatrix(int original[ROWS][COLS], int changed[ROWS][COLS]);
int main()
{
    int array01[ROWS][COLS] = {{2, 3, 0}, {8, 9, 1}, {7, 0, 5}};
    int array02[ROWS][COLS];
    transeposeMatrix(array01, array02);
    printMatrix(array01);
    printMatrix(array02);
}

void printMatrix(int array[ROWS][COLS])
{
    printf("====================\n");
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
            printf("%d", array[i][j]);
        printf("\n");
    }
    printf("====================\n");
}
void transeposeMatrix(int original[ROWS][COLS], int changed[ROWS][COLS])
{
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLS; j++)
            changed[j][i] = original[i][j];
}