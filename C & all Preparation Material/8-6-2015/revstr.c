#include<stdio.h>
#include"../7-6-2015/includes.h"

void rev(char *,char *);

int main(void)
{
int i=0,j=0;
char str[20] = "hai how are you";
char re[20] = {0};
P_S(str);
rev(re,str);
P_S(re);
}

void rev(char *r1,char *s1)
{
int i = 0;
while(s1[++i] != '\0');

while(i>=0)
{
*r1++ = s1[--i];
}
}
