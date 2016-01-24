#include <stdio.h>
#include "includes.h"
void myatoi(char *);

int main(void)
{
char str[] = {"naga"};
P_S(str);
myatoi(str);
return 0;
}


void myatoi(char *str1)
{
int ch[] = {0},i=0,j=0;
P_S(str1);
while(*str1)
{
P_C(*str1);
i = (i*10) + (*str1++);
//*str1++;
P_I(i);
}
}
