#define _CRE_SECURE_NO_WARNING
#include <stdio.h>
#define MAX_TERMS 100
typedef struct
{
    int row, col, value;
} element;
typedef struct
{
    element data[MAX_TERMS];
    int rows, cols, terms;
} SparseMatrix;

SparseMatrix transpose(SparseMatrix original, SparseMatrix changed)
{
    int changedIndex = 0;
    changed.rows = original.cols;
    changed.cols = original.rows;
    changed.terms = original.terms;
    if(original.terms > 0)
    {
        for(int i = 0; i < original.cols; i++)
        {
            for(int j = 0; j < original.terms; j++)
            {
                if(original.data[j].col == i)
                {
                    changed.data[changedIndex].row = original.data[j].col;
                    changed.data[changedIndex].col = original.data[j].row;
                    changed.data[changedIndex].value = original.data[j].value;
                    changedIndex++;
                }
            }
        }
    }
    return changed;
}
// 4	4.2 스택의 구현 매개변수로 스택전달 예 책 그대로
// 	4.3 동적배열 스택으로 바꿔서 써보기
// 5	4.5 중위 표기식을 후위 표기식으로 바꿔서 출력하는 코드 작성
// + 소괄호가 여러개 들어왔을때 소괄호의 쌍이 맞는지 검사하는