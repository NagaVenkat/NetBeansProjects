#include <stdio.h>
#include "../7-6-2015/includes.h"
#include <string.h>

void mymemmov(void *,void *);

int main(void)
{
int s = 123456;
P_I(s);
int d = 0;
//memcpy(&d,&s,sizeof(s));
mymemmov(&d,&s);
P_I(d);
//P_S(s);
return 0;
}

void mymemmov(void *d1,void *s1)
{
char *dd = d1;
char *ss = s1;
while(*dd++ = *ss++);
}

