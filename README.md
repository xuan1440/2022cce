# 2022cce

#include <stdio.h>
##用星星畫倒過來的三角形
```cpp
int main()
{
    ///for (int i=0; i<5; i++){
    ///
    ///}
    for(int i=5; i>0; i--){
         for(int j=0; j<i; j++){
             printf("*");
        }
         printf("i:%d星星\n", i);
    }
}
```cpp
## 用「左手i 當鷹架, 右手j 一直做」的口訣, 我們再來挑戰另外一題畫星星, 畫出等腰三角形
```cpp
#include <stdio.h>

int main()
{
    for (int i=1; i<=5; i++){
         int space=5-i, star=2*i-1;
         for(int k=0; k<space; k++) printf(" ");
         for(int k=0; k<star; k++) printf("*");
         printf("\n");
    }
}
```cpp
## 利用 for(int k=0; k<star; k++) 的迴圈, 來畫出星星, 收尾時印跳行
```cpp
#include <stdio.h>

int main()
{
    printf("請輸入2個整數,要約分: ");
    int a, b;
    scanf("%d %d", &a, &b);

    int ans;
    for (int i=1; i<=a; i++){
        if(a%i==0 && b%i==0){
           ans=i;
        }
    }
    printf("ans: %d 可約分", ans);
}
```cpp
##「輾轉相除法」可以找最大公因數
```cpp
#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    while(1){
        c=a%b;
        printf("老大:%d 老二:%d 老三:%d\n", a, b, c);
        if( c==0 ) break;
        a=b;
        b=c;
    }
    printf("答案b: %d", b);
}
```cpp


week08

#include <stdio.h>
##列出全部質數
'''cpp
int main()
{
    int n;
    scanf("%d", &n);
    int bad=0;
    for(int i=2; i<n; i++){
        if( n%i==0 ) bad=1;
    }
    if(bad==0) printf("%d 是質數", n);
    else printf("%d不好,不是質數", n);
}
'''cpp

#include <stdio.h>
##列出質數
'''cpp
int main()
{
    int a;
    scanf("%d", &a);
    
    
    for(int n=2; n<=a; n++){
    
	    int bad=0;
	    for(int i=2; i<n; i++){
	        if( n%i==0 ) bad=1;
	    }
	    if(bad==0) printf("%d ", n);
	}
	
}
'''cpp

#include <stdio.h>
##輸入5個數字, 把它們加起來
'''cpp
int main()
{
    printf("請輸入5個數字(要加起來): ");

    int n;
    int sum=0;
    for(int i=0; i<5; i++){
        scanf("%d", &n);
        sum+= n;
    }
    printf("總合是:%d", sum);
}
'''cpp

#include <stdio.h>
##寫出直角三角形
'''cpp
int main()
{
    int n;
    scanf("%d", &n);


    for(int i=1; i<=n; i++){

	    for(int k=1; k<=n-i; k++)printf(" ");
	    
	    for(int k=1; k<=i; k++)printf("*");
	    
	    printf("\n");
    }
    '''cpp
    
    #include <stdio.h>
    ##while迴圈印直角三角形
    '''cpp
int main()
{
    int n;
    scanf("%d", &n);


    for(int i=1; i<=n; i++){
        for(int k=1; k<=n; k++){
	    if (k<=n-i) printf(" ");
	    else      printf("*");
        }
        printf("\n");
    }
	      

}
	      

}
'''cpp

#include <stdio.h>
##2個while迴圈, 畫出有空格、有星星的右方直角三角形
'''cpp
int main()
{
    int n;
    scanf("%d", &n);

    int i=1;
    while(i<=n){

        int k=1;
        while(k<=n){

            if (k<=n-i) printf(" ");
	        else printf("*");

            k++;
        }

        printf("\n");
        i++;
    }
}
'''cpp






