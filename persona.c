#include <stdio.h>
#include <string.h>
#include "persona.h"

float IngresarDato( char nombre[5][20], char estado [5][20], int edad[5]){
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

