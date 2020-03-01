#include <stdio.h>
#include <stdlib.h>
// en este codigo muestra datos basura en la memoria o residuos de programas anteriores
int main (){
    int *arreglo, num, cont;//declaracion de variables
    printf("¿Cuantos elementos tiene el conjunto?\n");//pide la medida del vector
    scanf("%d",&num);// se lee la variable
    arreglo = (int *)malloc (num * sizeof(int));//malloc reserva el espacio que utilizara el vector
    if (arreglo!=NULL) {//aquí se pone una condicion la cual dice que si el vector el cero osea un vector nulo hara que no entre al ciclo ya que no se reservara memoria
            printf("Vector reservado:\n\t[");
    for (cont=0 ; cont<num ; cont++){
            printf("\t%d",*(arreglo+cont));}
    printf("\t]\n");
    printf("Se libera el espacio reservado.\n");
    free(arreglo);//libera la memoria reservada
    }
    return 0; }
