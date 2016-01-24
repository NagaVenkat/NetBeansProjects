#include<stdio.h>
#include "../7-6-2015/includes.h"

int main(void)
{
int n = 5,i=1;
int fact = 0;

while(n != 0)
{
P_I(n);
i *= n;
n--;
P_I(i);
}
}
