#include<stdio.h>
int main()
{
    int a, b, tem;
    scanf("%d",&a);
     scanf("%d",&b);
    tem=a;
    a=b;
    b=tem;
    printf("a = %d\n",a);
      printf("b = %d", b);
    return 0;
}
