#include <stdio.h>
int sum(int a, int b );///先宣告 declare

int main()
{///再用之前 先宣告 declare 或定義 define
    int ans = sum (2, 3);/// 使用 呼叫
    printf("ans: %d\n", ans);
}
int sum(int a, int b )///定義 define
{
    return a + b;
}/// 回傳 回復人家
