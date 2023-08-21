#include <stdio.h>

float CalcDivisao(float n1, float n2){
    printf("\nNumero 1:");
    scanf("%f", &n1);
       
    printf("\nNumero 2:");
    do {
        scanf("%f", &n2); 
    } while(n2 == 0);
       
    return n1 / n2;
}