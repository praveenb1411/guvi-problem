#include<stdio.h>
#include<stdlib.h>
int main()
{int n,i=0,p=0;
scanf("%d",&n);
while(i<n)
{p=i+p;
	i++;
}
printf("%d",p);
    return 0;
}
