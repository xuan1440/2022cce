#include <stdio.h>
int sum(int a, int b );///���ŧi declare

int main()
{///�A�Τ��e ���ŧi declare �Ωw�q define
    int ans = sum (2, 3);/// �ϥ� �I�s
    printf("ans: %d\n", ans);
}
int sum(int a, int b )///�w�q define
{
    return a + b;
}/// �^�� �^�_�H�a
