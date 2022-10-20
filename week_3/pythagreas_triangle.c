#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, count=0;
    printf("150以內的勾股數有：\n");
    printf("  a    b    c      a    b    c      a    b    c      a    b    c\n");
    /*求150以內勾股數*/
    for(a=1; a<=500; a++){
        for(b=a+1; b<=500; b++)
        {
            c=(int)sqrt(a*a+b*b);  /*求c值*/
            if(c*c==a*a+b*b && a+b>c && a+c>b && b+c>a && c<=500)  /*判斷c的平方是否等於a2+b2*/
            {
                printf("%4d %4d %4d    ", a, b, c);
                count++;
                if(count%4==0)  /*每輸出4組解就換行*/
                    printf("\n");
            }
        }
    }
    printf("\n");
    return 0;
}