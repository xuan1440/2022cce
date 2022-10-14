#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);

    if (n%400==0) printf("yes");
    else if (n%100==0) printf("no");
    else  if (n%4==0) printf("yes");
    else printf("no");

}

