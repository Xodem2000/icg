//
//  td01.c
//  td01
//
//  Created by FAYS M new on 13/10/2021.
//

#include "td01.h"
#include <stdlib.h>

// Q1


int fib(int n){
    if (n==0) return 0;
    int i=1, i_moins_1=0;
    int k=0;
    for (int j=1; j<=n; j++) {
        k = i+i_moins_1;
        i_moins_1 = i;
        i = k;
    }
    return i;
}

// Q4

void aff_poly(int* p, int degree){
    for (int i=degree; i>=0; i--){
        printf("%i*X^%i",p[i], i);
        if (i!=0){
            if (p[i-1]>=0) printf("%c",'+');
        }
    }
}

// Q5

float eval(int* p, int degree, float x){
    float retour=0;
    
    for (int i=degree; i>=0; i--){
        retour *= x;
        retour += p[i];
    }
    
    return retour;
}

float fonc_eval(float x){
    int* poly = (int*)malloc(3*sizeof(int));
    poly[0] = -1;
    poly[1] = -1;
    poly[2] = 1;
    return eval(poly, 2, x);
}

// Q6

float dico(float f(float), float a, float b){
    float c;
    for (int i=0; i<12; i++){
        c = (a+b)/2;
        if (f(c)<0){
            a = c;
        }
        else{
            b = c;
        }
    }
    return (a+b)/2;
}
