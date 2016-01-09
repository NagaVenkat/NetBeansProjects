/* 
 * File:   main.c
 * Author: Naga Venkat
 *
 * Created on December 31, 2015, 3:17 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define P_I(EXP)    printf(#EXP "= %d \n",EXP)
#define P_C(EXP)    printf(#EXP "= %c \n",EXP)
#define P_S(EXP)    printf(#EXP "= %s \n",EXP)
#define P_H(EXP)    printf(#EXP "= %x \n",EXP)
#define P_F(EXP)    printf(#EXP "= %0.10f \n",EXP)
#define P_NL(EXP)   printf(#EXP"\n")
#define P(EXP)      printf(#EXP)

/*
 * 
 */
uint8_t gyro_data[55] = {0};

int main(int argc, char** argv)
{
    P_NL(Gyrodata);
    uint8_t i = 0;
    uint16_t sum = 0;
    float flo = 0;
    for (i = 0; i < 52; i++) {
        gyro_data[i] = ++gyro_data[0];
        printf("gyro_data[%d]=%d\n", i, gyro_data[i]);
        sum += gyro_data[i];
        P_H(sum);
    }
    P_H((~sum) & 0xFFFF);
    flo = 5*pow(10,-8);
    P_F(5*pow(10,-8));
    P_F(flo);
    return (EXIT_SUCCESS);
}