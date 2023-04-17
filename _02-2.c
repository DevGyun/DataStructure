#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_DEGREE 101
typedef struct
{
    int degree;
    float coef[MAX_DEGREE];
} polynomial;
void printPoly(polynomial poly);
polynomial addPoly(polynomial A, polynomial B);

int main()
{
    polynomial a = {5,{10,0,0,0,6,3}};
    polynomial b = {4,{1,0,5,0,7}};
    printPoly(a);
    printPoly(b);
    printf("----------------------------------\n");
    polynomial c = addPoly(a,b);
    printPoly(c);
}
void printPoly(polynomial poly)
{
    printf("%4.1f", poly.coef[0]);
    for(int i = 1; i <= poly.degree; i++)
    {   
        printf(" + %4.1fx^%d", poly.coef[i], i);
    }
    printf("\n");
}
polynomial addPoly(polynomial A, polynomial B)
{
    polynomial small, big, sum;
    if(A.degree < B.degree)
        small = A, big = B;
    else
        small = B, big = A;
    sum.degree = big.degree;
    for(int i = 0; i < sum.degree + 1; i++)
    {
        for(int j = 0; j < small.degree + 1; j++, i++)
        {
            sum.coef[i] = small.coef[i] + big.coef[i];
        }
        sum.coef[i] = big.coef[i];
    }
    return sum;
}
// 2	3.3 배열의 응용
// 	1	책에 나오는대로 코딩
// 	2	저장을 반대로 해서 코딩
// 3	3.4 희소행렬 출력
// 	첫번째 방법, 두번째 방법을 이용한 행렬 활용, 책에있는 코드 안보고 작성
// 4	4.2 스택의 구현 매개변수로 스택전달 예 책 그대로
// 	4.3 동적배열 스택으로 바꿔서 써보기
// 5	4.5 중위 표기식을 후위 표기식으로 바꿔서 출력하는 코드 작성
// + 소괄호가 여러개 들어왔을때 소괄호의 쌍이 맞는지 검사하는 코드작성