#include <stdio.h>
#include "../7-6-2015/includes.h"

void mystrstr(void *,void *const,void *);

int main(void)
{
char str[] = {"Hai naga venkat how are you"};
char des[] = {0};
P_S(str);
mystrstr(des,"ai",str);
P_S(des);
}

void mystrstr(void *d1,void *const c1, void *s1)
{
char *dd = d1;
char *cc = c1;
char *ss = s1;

while(*cc)
{
if(*cc == *ss)
{
if(*cc == '\0' || *ss == '\0')
{
break;
}
*cc++;
*ss++;
}
else
{
*ss++;
}
}

while(*dd++ = *ss++);

}
