#include <stdio.h>
#include <string.h>
#include "persona.h"

int main (int argc, char *argv[]) {
    char nombres[5][20];
    char estado [5][20];
    int edad [5];
    char buscado [20];
    int opc=0;
do
{
    switch (printf("1.Ingresar personas \n 2.Buscar por estado civil\n 3. Buscar por edad\n 4.Salir"))
    {
    case  1:
        IngresarDato(nombres, estado, edad);
        break;
    case  2:
        BuscarEstado(nombres, estado, edad, buscado);
        break;
    case  3:
        BuscarEdad(nombres, estado, edad, buscado);
        break;
    case  4:
     if (opc == 1)
    {
        printf("Saliendo del programa");
        opc=1;
    }
    default: printf("No se encuentra la opcion");
        break;
    }

    printf("Desea salir: %d", opc);
    scanf("%d", &opc);

} while (opc==1);

return 0; 
}

/*float IngresarDato( char nombre[5][20], char estado [5][20], int edad[5]){
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el nombre: %d",nombre[i]);
        scanf("%d",&nombre[i]);

     for (int i = 0; i < 5; i++)
     {
        printf("Ingrese el estado civil de %d", estado[i][20]);
            scanf("%d",&estado[i][20]);
            
        for (int i = 0; i < 5; i++)
     {
        printf("Ingrese la edad de %d", edad[i]);
            scanf("%d",&edad[i]);
     }
        
    } 
}
}

float BuscarEstado(char nombre[5][20], char estado [5][20], int edad[5], char buscado[20] ){
    int encontrado=0 
    for (int i = 0; i < 5; i++){
        if (strcmp(estado[i], buscado[20]== 0 ))
    {
        printf("El nombre de la persona con estado civil %s es: %s", estado[i][20], nombre[i]);
        encontrado=1
        break;;
    }
    } if (!encontrado)
    {
        printf("No se ha encontrado")
    }  
}

float BuscarEdad(char nombre[5][20], char estado [5][20], int edad[5], char buscado[20] ){
    int encontrado=0 
    for (int i = 0; i < 5; i++){
        if (strcmp(edad[i], buscado[20]== 0 ))
    {
        printf("El nombre de la persona con edad %d es: %s", edad[5], nombre[i]);
        encontrado=1
        break;;
    }
    } if (!encontrado)
    {
        printf("No se ha encontrado")
    }  
}

float Salir(int opc){
    printf("Desea salir del programa: %d", opc)
    scanf("%d, &opc")

    if (opc == 1)
    {
        printf("Saliendo del programa");
        opc=1
    }
    
}
*/


