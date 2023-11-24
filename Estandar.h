#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>
#ifndef ESTANDAR_H
#define ESTANDAR_H

#include "validacion.h"

void suma(float num1, float num2);
void resta(float num1, float num2);
void multi(float num1, float num2);
void division(float num1, float num2);
void estandar();

#endif // ESTANDAR_H


void suma(float num1, float num2){
    char numStr1[32], numStr2[32];
    sprintf(numStr1, "%f", num1);
    sprintf(numStr2, "%f", num2);
    if (!numeroValido(numStr1) || !numeroValido(numStr2)) {
        printf("Entrada no válida.\n");
        return;
    }

    float resultado;
    resultado=num1+num2;
    mostrarResultado(resultado);

}

void resta(float num1, float num2){
    char numStr1[32], numStr2[32];
    sprintf(numStr1, "%f", num1);
    sprintf(numStr2, "%f", num2);
    if (!numeroValido(numStr1) || !numeroValido(numStr2)) {
        printf("Entrada no válida.\n");
        return;
    }

    float resultado;
    resultado=num1-num2;
    mostrarResultado(resultado);

}

void multi(float num1, float num2){
    char numStr1[32], numStr2[32];
    sprintf(numStr1, "%f", num1);
    sprintf(numStr2, "%f", num2);
    if (!numeroValido(numStr1) || !numeroValido(numStr2)) {
        printf("Entrada no válida.\n");
        return;
    }

    float resultado;
    resultado=num1*num2;
    mostrarResultado(resultado);
}

void division(float num1, float num2){
    char numStr1[32], numStr2[32];
    sprintf(numStr1, "%f", num1);
    sprintf(numStr2, "%f", num2);
    if (!numeroValido(numStr1) || !numeroValido(numStr2)) {
        printf("Entrada no válida.\n");
        return;
    }

    float resultado;
    resultado=num1/num2;
    mostrarResultado(resultado);
}