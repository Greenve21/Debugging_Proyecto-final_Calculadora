#ifndef VALIDACION_H
#define VALIDACION_H

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

bool binarioValido(long long numero);

void leerNumeroBinario(long long *numero);

bool numeroValido(const char *str) {
    bool puntoEncontrado = false;

    if (*str == '-' || *str == '+') {
        str++;
    }
    if (*str == '\0') {
        return false;
    }
    while (*str) {
        if (*str == '.') {
            if (puntoEncontrado) {
                return false;
            }
            puntoEncontrado = true;
        } else if (!isdigit(*str)) {
            return false;
        }
        str++;
    }
    return true;
}

void leerNumeroBinario(long long *numero) {
    char numStr[32];
    while (1) {
        printf("Ingrese un número binario: ");
        scanf("%31s", numStr); // Lee la entrada como cadena
        long long num;
        if (sscanf(numStr, "%lld", &num) == 1 && binarioValido(num)) {
            *numero = num; // Asigna el número leído a la variable pasada
            break;
        } else {
            printf("Entrada no válida. Por favor, ingrese un número binario válido.\n");
        }
    }
}

bool binarioValido(long long numero) {
    while (numero != 0) {
        if (numero % 10 > 1) {
            return false; // Si encuentra un dígito mayor que 1, no es binario
        }
        numero /= 10;
    }
    return true;
}


void leerNumero(float *num) {
    char numStr[32];
    while (1) {
        scanf("%31s", numStr); // Lee la entrada como cadena
        if (numeroValido(numStr)) {
            sscanf(numStr, "%f", num); // Convierte la cadena a float
            break;
        } else {
            printf("Entrada no válida. Por favor, ingrese un número: ");
        }
    }
}

void mostrarResultado(float resultado) {
    // Verifica si el resultado es un entero
    if (resultado == floor(resultado)) {
        // Muestra como entero
        printf("El resultado es: %.0f\n", resultado);
    } else {
        // Muestra como número flotante con un número limitado de decimales
        printf("El resultado es: %.12f\n", resultado);
    }
}

void limpiarBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }
}

#endif // VALIDACION_H


