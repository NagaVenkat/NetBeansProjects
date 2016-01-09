/* 
 * File:   main.c
 * Author: Naga Venkat
 *
 * Created on August 3, 2015, 1:54 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define P_I(EXP)    printf(#EXP "= %d \n",EXP)
#define P_C(EXP)    printf(#EXP "= %c \n",EXP)
#define P_S(EXP)    printf(#EXP "= %s \n",EXP)
#define P_H(EXP)    printf(#EXP "= %x \n",EXP)
#define P_NL(EXP)   printf(#EXP"\n")
#define P(EXP)      printf(#EXP)
/*
 * 
 */
uint8_t array[2] = {0};
void ADC_DATA(uint8_t *value);
int main()
{
    uint16_t naga = 0;
    P_H( array[0]);
    P_H( array[1]);
   ADC_DATA(array);
    P_H( array[0]);
    P_H( array[1]);
}
void ADC_DATA(uint8_t *value)
{
    uint32_t data = 0x1234;
    value[0] = ((uint8_t) (data>>8));
    value[1] = ((uint8_t) (data));
    P_H( value[0]);
    P_H( value[1]);
    
//    return *value;
}
//int main()
//{
//    uint8_t *add_loca;
//    uint8_t *naga = (uint8_t *)&add_loca;
//    P_H(&add_loca);
//    P_H(*naga);
//    naga[0] = 10;
//    P_H(naga);P_H(*(naga+0));P_H(&naga);    
//}

//uint8_t uart_data_send[5] = {0};
//static uint8_t data_ = 0;
//static uint8_t data_t = 0;
//uint8_t uart_data_cnt = 0;
//send_data(uint8_t arr)
//{
//
//    data_ = ((arr) - 48);
// //   if(uart_data_cnt != 0)
//    {
//        data_ = data_ * 10;
//        uart_data_cnt++;
//    }
//    P_I(data_);
//}
//
//int main(int argc, char** argv) {
//    int i = 2;
//    int T;
//    uart_data_send[0] = 49;
//    uart_data_send[1] = 50;
//    uart_data_send[2] = 51;
//    uart_data_send[3] = 0x0A;
//    if (i == 0) {
//        data_ = uart_data_send[0] - 48;
//    }
//    else if (i == 1) {
//        data_ = uart_data_send[0] - 48;
//        data_ *= 10;
//        P_I(data_);
//        data_ += uart_data_send[1] - 48;
//    }
//    else if (i == 2) {
//        data_ = uart_data_send[0] - 48;
//        data_ *= 10;
//        data_ |= uart_data_send[1] - 48;
//        data_ *= 10;
//        data_ |= uart_data_send[2] - 48;
//    }
//    struct T
//    {
//        int x;
//    };
//    P_I(sizeof(T));
//    P_I(data_);
//    printf("Hello Naga");
//    return (EXIT_SUCCESS);
//}
//
//
//void call_ (char);
//void call(char *na)
//{
//    while(*na != '\0')
//    {
//    P_C(*na);
//    na++;
//    }
//}
//enum naga
//{
//    one= 100,two,three
//};
//int main()
//{
//    char a[11] = "0123456789";
//    char ab[1024] = {0};
//    int test = 0;
//    P_S(a);
//    P_I(atoi(a));
//    call("naga venkat");
//    P_S("naga");
////    P(naga);
//    P_I(one);
//    P_I(two);
//    P_I(three);
//    test = system("ls -l");
//    P_I(test);
//    P_S(__TIME__);
////    P_S(ctime(5000));
////    P_I(test);
////    while(1);
//    return 0;
//}