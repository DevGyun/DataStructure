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
    polynomial a = {5,{3,6,0,0,0,10}};
    polynomial b = {4,{7,0,5,0,1}};
    printPoly(a);
    printPoly(b);
    printf("----------------------------------\n");
    polynomial c = addPoly(a,b);
    printPoly(c);
}
void printPoly(polynomial poly)
{
    for(int i = poly.degree; i > 0; i--)
        printf("%4.1fx^%d +", poly.coef[poly.degree - i], i);
    printf("%4.1f\n", poly.coef[poly.degree]);
}
polynomial addPoly(polynomial A, polynomial B)
{
    polynomial small, big, sum;
    if(A.degree < B.degree)
        small = A, big = B;
    else
        small = B, big = A;
    sum.degree = big.degree;
    int degreeGap = big.degree - small.degree;
    for(int i = 0; i < sum.degree + 1; i++)
    {
        for(int j = 0; j < degreeGap; j++, i++)
        {
            sum.coef[i] = big.coef[i];
        }
        sum.coef[i] = small.coef[i - 1] + big.coef[i];
    }
    return sum;
}