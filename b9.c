#include<stdio.h>
#include<stdlib.h>
int main()
{int n,i,p,q=0;
scanf("%d %d",&n,&p);
for(i=1;i<=p;i++)
{
	q=q+i;
}
printf("%d",q);
    return 0;
}
