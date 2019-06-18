#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a,b,c,d,e,f;
   scanf("%d %d %d",&a,&b,&c);
   f=((d=(a>b?a:b))>(e=(b>c?b:c))?d:e);
   printf("%d",f);
    return 0;
}
