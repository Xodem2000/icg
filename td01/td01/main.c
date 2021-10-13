//
//  main.c
//  td01
//
//  Created by FAYS M new on 13/10/2021.
//

#include <stdio.h>
#include <stdlib.h>

#include "td01.h"

void main(int argc, const char * argv[]) {
    
    // Q2
    for (unsigned short n=0; n<10; n++)
    {
        printf("%i", n);
        printf("%c", ' ');;
        printf("%i", fib(n));
        printf("%c", '\n');
    }
    
    for (unsigned short n=45; n<51; n++)
    {
        printf("%i", n);
        printf("%c", ' ');;
        printf("%i", fib(n));
        printf("%c", '\n');
    }
    
    // Q3
    // cela est due au fait que l'on dépasse la capacité d'un int
    
    // Q4

    int* poly = (int*)malloc(3*sizeof(int));
    poly[0] = -1;
    poly[1] = -1;
    poly[2] = 1;
    
    aff_poly(poly, 2);
    
    // Q5
    
    printf("%c", '\n');
    printf("%f", eval(poly, 2, 1));
    printf("%c", '\n');
    printf("%f", eval(poly, 2, 2));
    printf("%c", '\n');
    printf("%f", eval(poly, 2, 1.618042));
    printf("%c", '\n');
    
    
    // Q6
    
//    float dico(float f(float), float a, float b)
    
    
    printf("%f", dico(fonc_eval, 1, 2));
    printf("%c", '\n');
    printf("%c", '\n');
    printf("%c", '\n');
    printf("%c", '\n');
    printf("%c", '\n');
    printf("%c", '\n');
    
    // Q7
    
    float fib_n = (float)fib(10);
    float fib_n_moins_un = (float)fib(9);
    
    for (int n=10; n<=15; n++){
        printf("%f", fib_n/fib_n_moins_un);
        printf("%c", '\n');
        fib_n_moins_un = fib_n;
        fib_n = (float)fib(n);
    }
    
}
