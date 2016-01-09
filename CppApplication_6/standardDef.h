/* 
 * File:   standardDef.h
 * Author: Naga Venkat
 *
 * Created on December 19, 2015, 12:55 PM
 */

#ifndef STANDARDDEF_H
#define	STANDARDDEF_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdio.h>
#include <time.h>
#define P_I(EXP)    printf(#EXP "= %d \n",EXP)
#define P_C(EXP)    printf(#EXP "= %c \n",EXP)
#define P_S(EXP)    printf(#EXP "= %s \n",EXP)
#define P_H(EXP)    printf(#EXP "= %x \n",EXP)
#define P_NL(EXP)   printf(#EXP"\n")
#define P(EXP)      printf(#EXP)



#ifdef	__cplusplus
}
#endif

#endif	/* STANDARDDEF_H */

