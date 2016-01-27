/* 
 * File:   main.c
 * Author: Naga Venkat
 *
 * Created on December 19, 2015, 12:28 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include "standardDef.h"

//#define CALL_FUN_W_WO_PARAMETER
//#define MACROS_AND_PREPROCESSORS_IN_C
//#define TWO_S_COMPLHEMENT_CHECKSUM
//#define ONE_S_COMPLHEMENT_CHECKSUM
//#define WRITE_DATA_TO_FILE
//#define FLOAT_POINT_POSITION
//#define CHANG_CONST_VALUE
//#define ARRAY_OF_POINTERS_TO_FUNC
#define CONST_ACCESSING

/* Difference b/w variable declaration and definition
 
 * declare a variable:  refers to the part where a variable is first declared 
   or introduced before its first use
 * define a variable:  the part where the variable is assigned a memory location
   and a value. Most of the times, variable declaration and definition are done
   together
 */

/*
 * 
 */

#ifdef ARRAY_OF_POINTERS_TO_FUNC
int (*a[10])(int v);
int (b) (int v);
int (c) (int v);
#endif
#ifdef MACROS_AND_PREPROCESSORS_IN_C
#define MAX 100
#define INCREMENT(x) ++x
#define MULTIPLY(a,b) a*b 
#define MERGE(a,b)  a##b
#define get(a)  #a
#define PRINT(i,limit) while(i < limit) \
                        { \
                            printf("\nGeeksquize"); \
                            i++; \
                            }
#define SQUARE(x) x*x

inline int
square(int x)
{
    return x*x;
} //with or without inline same ouput

#endif 

/*
 * 
 */

void Fun_W_Parameter(int);
void Fun_WO_Parameter();
char *ptr = 0;

int
main(int argc, char** argv)
{

#ifdef CONST_ACCESSING
    int _g = 12;
    const int *g = (int *) 10;//pointer to a constant integer
    /*here memory location i.e integer is not accessible "*g" but "g" pointer
     * variable is modifiable */
    P_I(g);
    g = &_g;
    P_I(*g);
    int* const h = (int *) 10;//constant pointer to an integer
    /*here memory location i.e integer is accessible "*h" but "h" pointer 
     * variable is not modifiable */
    P_I(h);
    *h = 12;//need to check some problem
    P_I(_g);
    
#endif 

#ifdef ARRAY_OF_POINTERS_TO_FUNC
    a[0] = b;
    a[0](1);
    a[1] = c;
    a[1](1);
#endif 

#ifdef CHANG_CONST_VALUE
    const char a = '\012';
    ptr = (char*) &a;
    *ptr = 55;
    *(int *) (0x22ac3f) = 25;
    printf("%d %p", a, (void *) &a);
#endif 

#ifdef FLOAT_POINT_POSITION
    float i = 1;
    printf("%0.9f", i);
#endif

#ifdef CALL_FUN_W_WO_PARAMETER
    /*calling a function with and without parameter*/
    printf("\ncalling a function with and without parameter");
    Fun_W_Parameter(10);
    Fun_WO_Parameter(10);

#endif
#ifdef MACROS_AND_PREPROCESSORS_IN_C
    printf("\nMACROS_AND_PREPROCESSORS_IN_C");
    printf("\nMAX = %d", MAX);
    char *ptr = "GeeksQuiz";
    int x = 10;
    printf("\nINCREMENT(GeeksQuiz) = %s", INCREMENT(ptr));
    printf("\nINCREMENT(10) = %d", INCREMENT(x));
    printf("\nMULTIPLY(2+3,5+2) = %d", MULTIPLY(2 + 3, 5 + 2));
    printf("\nMERGE(12,34) = %d", MERGE(12, 34));
    printf("\nget(GeeksQuize) %s", get(GeeksQuize));
    int i = 0;
    PRINT(i, 3);
    x = 36 / SQUARE(6);
    printf("\n36/SQUARE(6) = %d", x);
    x = 36 / square(6);
    printf("\n36/square(6) = %d", x);
    printf("\n__FILE__ = %s", __FILE__);
    printf("\n__DATE__ = %s", __DATE__);
    printf("\n__TIME__ = %s\n", __TIME__);
    P_I(__LINE__);
    printf("\n__FUNCTION__ = %s", __FUNCTION__);
#endif 
#ifdef TWO_S_COMPLHEMENT_CHECKSUM
    uint8_t array[4] = {0x11, 0x12, 0x13, 0x14};
    uint8_t i = 0;
    uint8_t checksum = 0;
    uint8_t sum = 0;
    for (i = 0; i < 4; i++) {
        sum += array[i];
    }
    checksum = ~sum + 1; //2's complement
    P_H(checksum);
    for (i = 0; i < 5; i++) {
        sum += array[i];
    }
    sum += checksum; //checking checksum
    P_H(sum);
#endif
#ifdef ONE_S_COMPLHEMENT_CHECKSUM

#endif

#ifdef WRITE_DATA_TO_FILE
    FILE *fp;
    int i;

    fp = fopen("results.txt", "w");
    if (fp == NULL) {
        printf("I couldn't open results.dat for writing.\n");
        exit(0);
    }

    for (i = 0; i <= 10; ++i)
        fprintf(fp, "%d, %d\n", i, i * i);
    fclose(fp);
#endif

    return (EXIT_SUCCESS);
}

#ifdef CALL_FUN_W_WO_PARAMETER

void
Fun_W_Parameter(int data_rx)
{
    printf("\n %s = %d", __FUNCTION__, data_rx);
}

void
Fun_WO_Parameter()
{
    printf("\n Calling this function  %s W or W/o parameters their no effect", __FUNCTION__);
}
#endif

#ifdef ARRAY_OF_POINTERS_TO_FUNC

int b(int v)
{
    printf("pointer - B\n");
}

int c(int v)
{
    printf("pointer - C\n");
}
#endif
