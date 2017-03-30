#include <stdio.h>
#include <stdlib.h>
#define MAX 100

float promedio(int edad[], int cantidad){

    float retornoPromedio;
    int i, suma=0;

    for(i=0;i<cantidad;i++){
        suma=suma+edad[i];
    }
    retornoPromedio=(float)suma/cantidad;

    return retornoPromedio;
}

int pedirEdad()
{
    int i, edad[MAX];
    char respuesta;
    int buffer;

    for(i=0; i<MAX;i++){

        printf("\nIngrese la edad de la persona %d: ", i);
        scanf("%d", &edad[i]);

        printf("\n\nDesea seguir ingresando? [s/n]");
        fflush(stdin);
        scanf("%c", &respuesta);

        if(respuesta!='s'&&respuesta!='S'){
            break;
        }

        system("cls");
    }

}

int menu(int opcion)
{
    char error[]="Ingrese una opcion valida/n";
    char texto[]="1-Ingresar edad\n2-Sacar promedio\n3-Máximo\n4-Mínimo\n";

    printf("%s", texto);

    scanf("%d", &opcion);

    while(opcion<1 || opcion>4)
    {
        char aux;

        printf("%s", error);

        scanf("%d", &opcion);
    }

}
