/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "Estandar.h"
#include "Cientifica.h"
#include "Programador.h"

bool esNumero(const char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isdigit(str[i]) && str[i] != '.' && str[i] != '-') {
            return false;
        }
    }
    return true;
}

void estandar() {
    int opcion;
    float num1, num2;

    do {
        printf("\n\nSeleccione qué operación va a realizar \n");
        printf("1 Suma | 2 Resta | 3 Multiplicación | 4 División | 5 Salir \n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Digite el primer número: ");
                leerNumero(&num1);
                printf("Digite el segundo número: ");
                leerNumero(&num2);
                suma(num1, num2);
                break;
            case 2:
                printf("Digite el primer número: ");
                leerNumero(&num1);
                printf("Digite el segundo número: ");
                leerNumero(&num2);
                resta(num1, num2);
                break;
            case 3:
                printf("Digite el primer número: ");
                leerNumero(&num1);
                printf("Digite el segundo número: ");
                leerNumero(&num2);
                multi(num1, num2);
                break;
            case 4:
                printf("Digite el primer número: ");
                leerNumero(&num1);
                printf("Digite el segundo número: ");
                leerNumero(&num2);
                if (num2 != 0) {
                    division(num1, num2);
                } else {
                    printf("Error: =Math Error.\n");
                }
                break;
            case 5:
                printf("Saliendo del modo estándar...\n");
                break;
            default:
                printf("Opción no válida. Por favor intente de nuevo.\n");
                break;
        }
    } while (opcion != 5);
}

void cientifica() {
    int opcion;
    float num1, num2;

    do {
        printf("\n\nSeleccione qué operación va a realizar \n");
        printf("1 exponente | 2 numero y exponente | 3 numero exponente 2 | 4 raiz cuadrada de un numero | 5 Salir \n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Digite el exponente \n");
                leerNumero(&num1);
                exponente(num1);
                break;
            case 2:
                printf("Digite el número \n");
                leerNumero(&num1);
                printf("Digite el exponente\n");
                leerNumero(&num2);
                numero_exponente(num1, num2);
                break;
            case 3:
                printf("Digite el número \n");
                leerNumero(&num1);
                numero_2(num1);
                break;
            case 4:
                printf("Digite el número \n");
                leerNumero(&num1);
                raiz_cuadrada(num1);
                break;
            case 5:
                printf("Saliendo del modo científico...\n");
                break;
            default:
                printf("Opción no válida. Por favor intente de nuevo.\n");
                break;
        }
    } while (opcion != 5);
}

void programador() {
    int opcion;
    float num1;
    long long numero;
    char hexadecimal[20];

    do {
        printf("\n \nSeleccione qué operación va a realizar \n");
        printf("1 decimal a binario | 2 decimal a hexadecimal | 3 binario a hexadecimal | 4 hexadecimal a decimal | 5 Salir \n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Digite el número que quiere convertir a binario \n");
                leerNumero(&num1);
                decimal_binario((int)num1);
                break;
            case 2:
                printf("Digite el número que quiere convertir de decimal a hexadecimal \n");
                scanf("%f", &num1);
                decimal_Hexa((int)num1);
                break;
            case 3:
                printf("Digite el número que quiere convertir de binario a hexadecimal \n");
                leerNumeroBinario(&numero);
                binario_Hexa(numero);
                break;
            case 4:
                limpiarBufferEntrada();
                printf("Digite el número que quiere convertir de hexadecimal a decimal \n");
                scanf("%19s", hexadecimal); // Leer como cadena
                printf("El número decimal es: %d\n", hexa_decimal(hexadecimal));
                break;
            case 5:
                printf("Saliendo del modo programador...\n");
                break;
            default:
                printf("Opción no válida. Por favor intente de nuevo.\n");
                break;
        }
    } while (opcion != 5);
}
void calculadora(){
    int opcion_modo;

    printf("\nSeleccione el modo en que desee utilizar la calculadora \n");
    printf("1 Estándar | 2 Científica | 3 Programador  \n");
    scanf("%d", &opcion_modo);  // Solicitar la entrada del usuario

    if(opcion_modo == 1){
        estandar();    
    } else if(opcion_modo == 2){
        cientifica();    
    } else if(opcion_modo == 3){
        programador();
    } else {
        printf("La opción ingresada no existe \n");
    }
}



int main()
{
    calculadora();

    return 0;
}