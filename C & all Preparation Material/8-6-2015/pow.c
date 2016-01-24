#include<stdio.h>
#include "../7-6-2015/includes.h"

void mypow(int,int);

int main()
{
mypow(5,5);
}

void mypow(int a,int b)
{
int i=1,pow=0;
while(i<=b)
{
pow = pow + a;
i++;
}
P_I(pow);
}

