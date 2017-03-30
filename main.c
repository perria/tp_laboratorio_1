#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#define MAX 100

int main()
{
    int opc=0, pedirEd;
    float prom=0;
    char seguir='s';

    while(seguir=='s')
    {
        opc=menu(opc);

        switch(opc)
        {
        case 1:
            pedirEd=pedirEdad(pedirEd);
            break;
        case 2:
            prom=promedio(prom);
            break;
        case 3:
            break;

        }
    }


    //printf("\nEl promedio de las edades ingresadas es %.2f", promedio(edad, i+1));

    return 0;
}
