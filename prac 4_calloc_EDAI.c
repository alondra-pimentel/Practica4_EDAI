#include <stdio.h>
#include <stdlib.h>
//en este codigo se muestra como reservar memoria y limpiarla
int main (){
    int *arreglo, num, cont;//declaracion de variables
    printf("¿Cuantos elementos tiene el conjunto?\n");
    scanf("%d",&num);//lee la dimesion del vector
    arreglo = (int *)calloc (num, sizeof(int));//calloc limpia la memoria reservada
    if (arreglo!=NULL) {//aqui hay una condicion la cual dice que si la dimension del vector el 0 osea un vector nulo no entra al la condicion
            printf("Vector reservado:\n\t[");
    for (cont=0 ; cont<num ; cont++){
            printf("\t%d",*(arreglo+cont));}//en esta parte te manda a imprimir los valores del vector pero como calloc ya limpio esa memoria
            //se mandara a imprimir unicamente 0
    printf("\t]\n");
    printf("Se libera el espacio reservado.\n");
    free(arreglo);//se librea el espacio utilizado por el vector
    }
    return 0;
    }
