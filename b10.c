#include<stdio.h>
#include<stdlib.h>
int main()
{long long n;
int i,p=0;
scanf("%d",&n);
while(n!=0)
{
	n=n/10;
	p=p+1;
}
printf("%d",p);
    return 0;
}
