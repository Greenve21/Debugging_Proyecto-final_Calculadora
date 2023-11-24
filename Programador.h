#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>


#ifndef PROGRAMADOR_H
#define PROGRAMADOR_H

#include "validacion.h"

void decimal_binario(int num1);
void decimal_Hexa(int num1);
void binario_Hexa(long long numero);
int hexa_decimal(char hexadecimal[]);
void programador();
bool binarioValido(long long numero);
void leerNumeroBinario(long long *numero);
#endif // PROGRAMADOR_H


void decimal_binario(int num1) {
    if (num1 < 0) {
        printf("No se permiten números negativos.\n");
        return;
    }

    if (num1 == 0) {
        printf("El número binario es: 0\n");
        return;
    }

    // Convertir binario
    int num_binario[32];
    int i = 0;
    while (num1 > 0) {
        num_binario[i++] = num1 % 2;
        num1 /= 2;
    }

    // Mostrar el resultado inverso
    printf("El número binario es: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", num_binario[j]);
    }
    printf("\n");
}

void decimal_Hexa(int num1) {
    if (num1 < 0) {
        printf("No se permiten números negativos.\n");
        return;
    }

    if (num1 == 0) {
        printf("El número hexadecimal es: 0\n");
        return;
    }

    printf("El número hexadecimal es: %x\n", num1);
}


void binario_Hexa(long long numero) {
    if (!binarioValido(numero)) {
        printf("Entrada no válida. Por favor ingrese un número binario.\n");
        return;
    }

    int decimal = 0, base = 1;

    while (numero > 0) {
        decimal += (numero % 10) * base;
        numero /= 10;
        base *= 2;
    }

    printf("El número hexadecimal es: %X\n", decimal);
}

int hexa_decimal(char hexadecimal[]) {
    int longitud = strlen(hexadecimal);
    int decimal = 0;

    for (int i = 0; i < longitud; i++) {
        char digito = hexadecimal[i];
        int valorDecimal;

        if (digito >= '0' && digito <= '9') {
            valorDecimal = digito - '0';
        } else if (digito >= 'A' && digito <= 'F') {
            valorDecimal = digito - 'A' + 10;
        } else if (digito >= 'a' && digito <= 'f') {
            valorDecimal = digito - 'a' + 10;
        } else {
            printf("Entrada no válida. El número hexadecimal contiene caracteres no permitidos.\n");
            return -1; // Código de error
        }

        decimal = decimal * 16 + valorDecimal;
    }

    return decimal;
}