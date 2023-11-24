#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#include <math.h>

#ifndef CIENTIFICA_H
#define CIENTIFICA_H

#include "validacion.h"

void exponente(float num1);
void numero_exponente(float num1, float num2);
void numero_2(float num1);
void raiz_cuadrada(float num1);
void cientifica();

#endif // CIENTIFICA_H


void exponente(float num1){ 
    char numStr1[32];
    sprintf(numStr1, "%f", num1);
    if (!numeroValido(numStr1)) {
        printf("Entrada no válida.\n");
        return;
    }
    float resultado = pow(10, num1);
    mostrarResultado(resultado);
    printf("10 elevado a %f es: %f \n", num1, resultado);
}

void numero_exponente(float num1, float num2){ 
    char numStr1[32], numStr2[32];
    sprintf(numStr1, "%f", num1);
    sprintf(numStr2, "%f", num2);
    if (!numeroValido(numStr1) || !numeroValido(numStr2)) {
        printf("Entrada no válida.\n");
        return;
    }
    float resultado = pow(num1, num2);
    mostrarResultado(resultado);
    printf("%f elevado a %f es: %f \n", num1, num2, resultado);
}

void numero_2(float num1){ 
    char numStr1[32];
    sprintf(numStr1, "%f", num1);
    if (!numeroValido(numStr1)) {
        printf("Entrada no válida.\n");
        return;
    }
    float resultado = pow(num1, 2);
    mostrarResultado(resultado);
    printf("%f elevado a la 2 es: %f \n", num1, resultado);
}

void raiz_cuadrada(float num1){ 
    char numStr1[32];
    sprintf(numStr1, "%f", num1);
    if (!numeroValido(numStr1)) {
        printf("Entrada no válida.\n");
        return;
    }
    if (num1 < 0) {
        printf("Error: =Math Error.\n");
        return;
    }
    float resultado = sqrt(num1);
    mostrarResultado(resultado);
    printf("La raíz cuadrada de %f es: %f \n", num1, resultado);
}