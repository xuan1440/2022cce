#include <stdio.h>
int main()
{
    printf("A���ȬO %d\n", 'A');
    printf("B���ȬO %d\n", 'B');
    printf("C���ȬO %d\n", 'C');

    for(int c = 'A'; c<='Z'; c++){
        printf("%C ���ȬO %d\n", c, c);
    }
}

