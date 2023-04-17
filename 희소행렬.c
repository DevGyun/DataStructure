#define _CRE_SECURE_NO_WARNING
#include <stdio.h>
#define ROWS 3
#define COLS 3

void matrixPrint(int A[ROWS][COLS]);
void transeposeMatrix(int original[ROWS][COLS], int changed[ROWS][COLS]);
int main()
{
    int array01[ROWS][COLS] = {{2, 3, 0}, {8, 9, 1}, {7, 0, 5}};
    int array02[ROWS][COLS];
    
}

void printMatrix(int array[ROWS][COLS])
{
    printf("=============================");
    for(int i = 0; i < ROWS; i++)
    {
        for(int j = 0; j < COLS; j++)
            printf("%d",array[i][j]);
        printf("\n");
    }
    printf("=============================");
}
void transeposeMatrix(int original[ROWS][COLS], int changed[ROWS][COLS])
{
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < COLS; j++)
            changed[j][i] = original[i][j];
}
// 3	3.4 희소행렬 출력
// 	첫번째 방법, 두번째 방법을 이용한 행렬 활용, 책에있는 코드 안보고 작성
// 4	4.2 스택의 구현 매개변수로 스택전달 예 책 그대로
// 	4.3 동적배열 스택으로 바꿔서 써보기
// 5	4.5 중위 표기식을 후위 표기식으로 바꿔서 출력하는 코드 작성
// + 소괄호가 여러개 들어왔을때 소괄호의 쌍이 맞는지 검사하는