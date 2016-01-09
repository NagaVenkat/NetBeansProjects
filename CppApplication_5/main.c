// Program 1
#include <stdio.h>
#define PRINT(i, limit) while (i < limit) \
                        { \
                            printf("GeeksQuiz "); \
                            i++; \
                        }
            
   int y = 5;
   int x = 5;
   int fun();
int main()
{  
   int i =0;
   printf("%d", x);
   PRINT(i,3);
   printf("%d", y);
   return 0; 
}

int fun()
{
    printf("%s",__FUNCTION__);
}