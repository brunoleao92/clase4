#include <stdio.h>
#include <stdlib.h>
#include "TP1.h"
void menu()
{   int opc, num1=0, num2=0;
    char seguir='s';
    do{
        printf("\n1. Ingresar 1er operando (A= %i)\n2. Ingresar 2er operando (B= %i)\n", num1, num2);
        scanf("%i%i", &num1 , &num2);
        system("cls");
    }while(seguir == 's');


}
